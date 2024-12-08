#include <stdio.h>

// Partition function
int partition(int a[], int l, int h) {
    int pivot = a[h]; // Taking last element as pivot
    int i = l - 1;
    for (int j = l; j < h; j++) {
        if (a[j] < pivot) {
            i++;
            // Swap a[i] and a[j]
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    // Swap a[i+1] and pivot (a[h])
    int temp = a[i + 1];
    a[i + 1] = a[h];
    a[h] = temp;
    return i + 1; // Return pivot index
}

// Quick Sort function
void quickSort(int a[], int l, int h) {
    if (l < h) {
        int pivot = partition(a, l, h);
        quickSort(a, l, pivot - 1);
        quickSort(a, pivot + 1, h);
    }
}

// Function to print the array
void printa(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 3, 65, 73, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printa(arr, n);
    return 0;
}