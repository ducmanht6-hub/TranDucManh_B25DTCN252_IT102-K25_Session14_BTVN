#include <stdio.h>

int findGreatestwish(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int number1 = 36;
    int number2 = 60;

    printf("Hai so la: %d va %d\n", number1, number2);
    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n", number1, number2, findGreatestwish(number1, number2));

    return 0;
}

