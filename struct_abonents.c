//
// Created by neuro on 17.05.22.
//

#include "stdio.h"

#define LIMIT 10

struct  Abonent{
    char *name;
    int phone_number;
};

void add_abonent(struct *abonent, *abonent_name, int abonent_phone_number, int index){
    abonent[index].name = abonent_name;
    abonent[index].phone_number = abonent_phone_number;
}

int main() {

    struct Abonent Abonent[LIMIT];
    char *name;
    int phone_number;

    for(int i = 0; i < LIMIT; ++i){
        print("Введите имя абонента: ");
        scanf("%s", name);
        printf("\nВведите номер телефна абонента: ");
        scanf("%d", phone_number);
        print("\n");
    }

    return 0;
}