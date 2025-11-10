#include <stdio.h>

int searchMax(int arr[], int n) {
    int max = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 12, 7, 9, 20, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("So lon nhat trong mang la: %d\n", searchMax(arr, size));

    return 0;
}

