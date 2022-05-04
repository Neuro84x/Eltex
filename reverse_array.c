#include <stdio.h>

#define ARRAY_LIMIT 10

void reverse_array(int array[ARRAY_LIMIT]);

int main() {
    //Вывод перевернутого массива
    int array[ARRAY_LIMIT];
    printf("Вводите %d чисел:\n", ARRAY_LIMIT);
    for (int j = 0; j < ARRAY_LIMIT; ++j) {
        scanf("%d", &array[j]);
    }

    reverse_array(array);
    printf("\n");
    return 0;
}

void reverse_array(int a[ARRAY_LIMIT]) {
    for (int i = ARRAY_LIMIT - 1; i >= 0; --i) {
        printf("%d ", a[i]);
    }
}
