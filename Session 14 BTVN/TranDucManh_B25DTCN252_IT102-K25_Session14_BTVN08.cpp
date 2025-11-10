#include <stdio.h>
#include <stdbool.h>

bool checkPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int number1, number2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);

    if (checkPrime(number1))
        printf("%d la so nguyen to.\n", number1);
    else
        printf("%d khong phai la so nguyen to.\n", number1);
    if (checkPrime(number2))
        printf("%d la so nguyen to.\n", number2);
    else
        printf("%d khong phai la so nguyen to.\n", number2);
    return 0;
}

