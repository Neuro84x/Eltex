#include <stdio.h>

#define MATRIX_LIMIT 8

void square_matrix(int size);

int main() {

    //Вывод квадратной матрицы
    int size = 0; //здесь 0 чтобы ввод char'ов не работал
    scanf("%d", &size);
    square_matrix(size);
    return 0;
}

void square_matrix(int n) {
    int c = 1;

    //Чтобы отрицательные числа вводились
    if (n < 0) {
        n = -n;
    }

    if (n <= MATRIX_LIMIT) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%5d ", c);
                ++c;
            }
            printf("\n");
        }
    } else {
        printf("Nmax = 100\nYour N = %d", n);
    }

}
