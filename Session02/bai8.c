#include <stdio.h>

int main() {
    int number = 12345;
    int result = 0;

    while (number > 0) {
        int sugoi = number % 10;        // lay so cuoi
        result = result * 10 + sugoi;   // dao nguoc chu so 12345 -> 54321
        number = number / 10;           // bo chu so cuoi1/	1
    }

    printf("So dao nguoc: %d\n", result);

    return 0;
}

