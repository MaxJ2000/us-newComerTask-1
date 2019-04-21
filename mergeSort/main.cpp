#include <iostream>

void mergeSort(int arr[], int left, int right, int tmp[]);

void merge(int arr[], int left, int mid, int right, int tmp[]);

int main() {
    int arr[] = {2134, 23, 54215, 2351325, 343, 623632, 213, 632574, 2, 7};
    int tmp[10];
    mergeSort(arr, 0, 9, tmp);
    getchar();
}

void mergeSort(int arr[], int left, int right, int tmp[]) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid, tmp);
        mergeSort(arr, mid + 1, right, tmp);
        merge(arr, left, mid, right, tmp);
    }
}

void merge(int arr[], int left, int mid, int right, int tmp[]) {
    int i = left;
    int j = mid + 1;
    int t = 0;
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            tmp[t++] = arr[i++];
        } else {
            tmp[t++] = arr[j++];
        }
    }
    while (i <= mid) {
        tmp[t++] = arr[i++];
    }
    while (j <= right) {
        tmp[t++] = arr[j++];
    }
    t = 0;
    while (left <= right) {
        arr[left++] = tmp[t++];
    }
}
