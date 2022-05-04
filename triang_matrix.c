#include <stdio.h>

void triang_matrix(int size);

int main() {
//Вывод треугольной матрицы
    int matrix_size = 0;
    scanf("%d", &matrix_size);
    triang_matrix(matrix_size);
    return 0;
}

void triang_matrix(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j >= n - i - 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

}
