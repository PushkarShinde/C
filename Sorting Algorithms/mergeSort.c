#include <stdio.h>

void merge(int a[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int ar[n1], br[n2]; // Temporary arrays
    
    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        ar[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++) {
        br[i] = a[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = l;
    
    // Merge the temporary arrays back into a[l..r]
    while (i < n1 && j < n2) {
        if (ar[i] <= br[j]) {
            a[k] = ar[i];
            i++;
        } else {
            a[k] = br[j];
            j++;
        }
        k++;
    }
    
    // Copy the remaining elements of ar[], if any
    while (i < n1) {
        a[k] = ar[i];
        i++;
        k++;
    }
    
    // Copy the remaining elements of br[], if any
    while (j < n2) {
        a[k] = br[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2; // To avoid overflow
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

void printa(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 3, 65, 73, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    printa(arr, n);
    return 0;
}
