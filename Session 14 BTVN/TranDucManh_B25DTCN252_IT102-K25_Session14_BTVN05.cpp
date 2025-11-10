#include <stdio.h>

long long calculateFactorial(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);

    printf("Giai thua cua %d la: %lld\n", number, calculateFactorial(number));

    return 0;
}

