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
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (checkPrime(number)){
        printf("%d la so nguyen to.\n", number);
    }else{
        printf("%d khong phai la so nguyen to.\n", number);
	}
    return 0;
}

