#include <stdio.h>

void printArray(int arr[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size;
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}


