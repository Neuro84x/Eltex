//
// Created by neuro on 18.05.22.
//

#include "stdio.h"
#include "string.h"

#define LIMIT 3

struct Abonent {
    char name[100];
    long phone_number;
};

void add_abonent(struct Abonent *abonent, int index) {
    char abonent_name[100] = {};
    long abonent_phone_number;
    char c;
    int i = 0;

    printf("\nВведите фамилию абонента: ");

    while ((c = getchar()) != '\n') {
        abonent_name[i] = c;
        ++i;
    }

    printf("Введите номер телефона абонента: ");
    scanf("%ld", &abonent_phone_number);

    while (getchar() != '\n');

    strcpy(abonent[index].name, abonent_name);
    abonent[index].phone_number = abonent_phone_number;

    //printf("\nName: %s\nPhone: %ld\n", abonent[index].name, abonent[index].phone_number);
}

void print_abonents(struct Abonent *abonent) {
    for (int i = 0; i < LIMIT; ++i) {
        printf("Name: %s\nPhone: %ld\n", abonent[i].name, abonent[i].phone_number);
    }
}

void find_abonent(struct Abonent *abonent) {
    int choice;
    int indx = 0;
    char flag = 0;
    char c;
    printf("1 - найти по фамилии, 0 - по номеру\n");
    scanf("%d", &choice);

    while (getchar() != '\n');

    char abonent_name[100] = {};
    long abonent_phone_number;

    if (choice) {
        printf("\nВведите фамилию абонента: ");
        while ((c = getchar()) != '\n') {
            abonent_name[indx] = c;
            ++indx;
        }

        for (int i = 0; i < LIMIT; ++i) {
            if (strcmp(abonent[i].name, abonent_name) == 0) {
                printf("Name: %s\nPhone: %ld\n", abonent[i].name, abonent[i].phone_number);
                flag = 1;
            }
        }

    } else {
        printf("Введите номер телефона абонента: ");
        scanf("%ld", &abonent_phone_number);
        for (int i = 0; i < LIMIT; ++i) {
            if(abonent[i].phone_number == abonent_phone_number){
                printf("Name: %s\nPhone: %ld\n", abonent[i].name, abonent[i].phone_number);
                flag = 1;
            }
        }
    }
    if (!flag) {
        printf("Не найдено!");
    }
}

int main() {

    struct Abonent abonents[LIMIT];

    char *name;
    long phone_number;


    for (int i = 0; i < LIMIT; ++i) {
        add_abonent(abonents, i);
    }

    printf("Журнал: \n");
    print_abonents(abonents);

    find_abonent(abonents);

    return 0;
}
