#include "stdio.h"

int main() {
    int a = 270533154;
    int i = 0;
    char *ptr = &a;

    printf("До изменения: \n");
    while (i < 4) {
        printf("%p = %d\n", ptr, *ptr);
        ++ptr;
        ++i;
    }

    ptr = &a; //возвращаем указатель на начало

    ptr = ptr + 2; //переходим к 3 байту

    *ptr = 11; //записываем в 3 байт новое значение

    ptr = &a; //возвращаемся в начало для вывода
    i = 0;

    printf("После изменения: \n");
    while (i < 4) {
        printf("%p = %d\n", ptr, *ptr);
        ++ptr;
        ++i;
    }

    return 0;
}
