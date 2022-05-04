#include <stdio.h>

#define MATRIX_LIMIT 7

void snail_matrix(void);

int main() {
//Вывод спиральной матрицы (для изменения размера менять MATRIX_LIMIT, работает и с четными и с нечетными)
    snail_matrix();

    return 0;
}

void snail_matrix(void) {
    int array[MATRIX_LIMIT][MATRIX_LIMIT];

    for (int i = 0; i < MATRIX_LIMIT; ++i) {
        for (int j = 0; j < MATRIX_LIMIT; ++j) {
            array[i][j] = 0;
        }
    }

    int c = 1; //выводимое число
    int step = MATRIX_LIMIT - 1; //количество переходов по линии
    int sign_counter = 2; //счетчик для смены знака (знак меняется каждые 2 step)
    int step_counter = 3; //счетчик для уменьшения step (3 т.к. верхняя грань, правая и нижняя, а потом через 2 уменьшается)

    char sign = '+';
    char coord = 'j';

    int j, i = j = 0;

    while (c <= MATRIX_LIMIT * MATRIX_LIMIT) {
        //Идем вниз
        if (sign == '+' && coord == 'i') {
            for (int h = 0; h < step; ++h) {
                array[i][j] = c;
                ++c;
                ++i;
            }
            coord = 'j';
        } else {
            //Идём вправо
            if (sign == '+' && coord == 'j') {
                for (int h = 0; h < step; ++h) {
                    array[i][j] = c;
                    ++c;
                    ++j;
                }
                coord = 'i';
            } else {
                //Идём вверх
                if (sign == '-' && coord == 'i') {
                    for (int h = 0; h < step; ++h) {
                        array[i][j] = c;
                        ++c;
                        --i;
                    }
                    coord = 'j';
                } else {
                    //Идём влево
                    if (sign == '-' && coord == 'j') {
                        for (int h = 0; h < step; ++h) {
                            array[i][j] = c;
                            ++c;
                            --j;
                        }
                        coord = 'i';
                    }
                }
            }
        }

        --sign_counter;
        --step_counter;
        //Смена знака
        if (sign_counter == 0) {
            if (sign == '+') sign = '-';
            else sign = '+';
            sign_counter = 2;
        }
        //Уменьшение шага пол линии
        if (step_counter == 0 && step != 1) {
            --step;
            step_counter = 2;
        }
    }

    //Вывод матрицы
    for (int k = 0; k < MATRIX_LIMIT; ++k) {
        for (int s = 0; s < MATRIX_LIMIT; ++s) {
            printf("%3d ", array[k][s]);
        }
        printf("\n");
    }


}
