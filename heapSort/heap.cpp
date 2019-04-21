#include "sortTemplate.h"
#include <iostream>

void adjustHeap(int k[], int i, int n);

void heapSort(int k[], int n);

void insert(int k[], int *n, int num);

int maxium(int k[]);

int extractMaxium(int k[], int *n);

void swap(int k[], int i, int j);

void heapIncreaseKey(int k[], int key, int i);

using namespace std;

int main() {
    int n = 8;
    char choice;
    int arr[n];
    int back = 1;
    getArray(&arr[1], n - 1);
    heapSort(arr, n);
    while (back == 1) {
        choice = getchar();
        switch (choice) {
            case 'i':
                printf("insert:");
                int num;
                scanf("%d", &num);
                insert(arr, &n, num);
                break;
            case 'q':
                back = 0;
                break;
            case 'm':
                cout << maxium(arr) << endl;
                break;
            case 'e':
                cout << extractMaxium(arr, &n) << endl;
                break;
            default:
                break;
        }
        while (getchar() != '\n');
        printArray(&arr[1], n - 1);
    }
}

void heapSort(int k[], int n) {
    int i;
    int tmp;
    for (i = (n - 1) / 2; i >= 1; i--) {
        adjustHeap(k, i, n - 1);
    }
    for (i = n - 2; i >= 1; i--) {
        tmp = k[i + 1];
        k[i + 1] = k[1];
        k[1] = tmp;
        adjustHeap(k, 1, i);
    }
}

void adjustHeap(int k[], int i, int n) {
    int j, tmp;
    tmp = k[i];
    j = 2 * i;
    while (j <= n) {
        if (j < n && k[j] > k[j + 1]) {
            j++;
        }
        if (tmp <= k[j]) {
            break;
        }
        k[j / 2] = k[j];
        j = 2 * j;
    }
    k[j / 2] = tmp;
}

int maxium(int k[]) {
    return k[1];
}

int extractMaxium(int k[], int *n) {
    int max = k[1];
    k[1] = k[*n - 1];
    (*n)--;
    heapSort(k, *n);
    return max;
}

int parent(int i) {
    return (i + 1) / 2 - 1;
}

void insert(int k[], int *n, int num) {
    heapIncreaseKey(k, num, *n);
    (*n)++;
    heapSort(k, *n);
}

void heapIncreaseKey(int k[], int key, int i) {
    k[i] = key;
    while (i >= 1 && k[parent(i)] < k[i]) {
        swap(k, parent(i), i);
        i = parent(i);
    }
}

void swap(int k[], int i, int j) {
    int tmp;
    tmp = k[i];
    k[i] = k[j];
    k[j] = tmp;
}