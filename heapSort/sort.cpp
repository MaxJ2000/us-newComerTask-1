#include <iostream>
#include "sortTemplate.h"

void insertSort(int k[], int n);

void adjustHeap(int k[], int i, int n);

void heapSort(int k[], int n);

int main() {
    int n = 6;
    int arr[n];
    getArray(&arr[1], n - 1);
//    insertSort(arr, n);
    heapSort(arr, n);
    getchar();
    printArray(&arr[1], n - 1);
}

void insertSort(int k[], int n) {
    int tmp, i, j;
    for (i = 2; i < n; i++) {
        tmp = k[i];
        j = i - 1;
        while (j >= 0 && tmp < k[j]) {
            k[j + 1] = k[j];
            j--;
        }
        k[j + 1] = tmp;
    }
}

void heapSort(int k[], int n) {
    int i;
    for (i = n / 2; i >= 1; i--) {
        adjustHeap(k, i, n);
    }
    for (i = n - 2; i >= 1; i--) {
        k[0] = k[i + 1];
        k[i + 1] = k[1];
        k[1] = k[0];
        adjustHeap(k, 1, i);
    }
}

void adjustHeap(int k[], int i, int n) {
    int j;
    k[0] = k[i];
    j = 2 * i;
    while (j <= n) {
        if (j < n && k[j] < k[j + 1]) {
            j++;
        }
        if (k[0] >= k[j]) {
            break;
        }
        k[j / 2] = k[j];
        j = 2 * j;
    }
    k[j / 2] = k[0];
}