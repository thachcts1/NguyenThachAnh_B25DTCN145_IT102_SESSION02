#include <stdio.h>

int main() {
    short a = 10;                   // short: so nguyen nho, kich thuoc 2 byte, pham vi -32,768 den 32,767
    int b = 1000;                   // int: so nguyen thong thuong, kich thuoc 4 byte, pham vi -2,147,483,648 den 2,147,483,647
    long c = 100000L;               // long: so nguyen lon hon int, kich thuoc thuong la 4 hoac 8 byte tuy theo he thong
    long long d = 10000000000LL;    // long long: so nguyen rat lon, kich thuoc 8 byte, pham vi rat lon

    unsigned short e = 50000;       // unsigned short: so nguyen duong nho, 2 byte, pham vi 0 den 65535
    unsigned int f = 3000000000U;   // unsigned int: so nguyen duong, 4 byte, pham vi 0 den 4,294,967,295
    unsigned long g = 4000000000UL; // unsigned long: so nguyen duong lon hon unsigned int, kich thuoc 4 hoac 8 byte
    unsigned long long h = 9000000000000000000ULL; // unsigned long long: so nguyen duong rat lon, 8 byte

    char i = 'A';                   // char: ky tu, 1 byte, dai dien cho ma ASCII cua ky tu

    // In cac gia tri ra man hinh
    printf("short a = %d\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);

    printf("unsigned short e = %hu\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);

    printf("char i = %c\n", i);

    return 0;
}

