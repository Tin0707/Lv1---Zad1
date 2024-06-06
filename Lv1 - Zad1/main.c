#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printBinary(int num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    int number;

    do {
        printf("Unesite cijeli broj u intervalu [-128, 127]: ");
        scanf("%d", &number);
    } while (number < -128 || number > 127);

    unsigned char binar = (unsigned char)number;
    printBinary(binar);

    return 0;
}
