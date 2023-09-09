#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>

#include "matrix_input.h"

double *InputTriangle (size_t *const matrix_size, size_t *const y_size) {

    assert (matrix_size != NULL && "Pointer to the matrix_size is NULL.");
    assert (y_size      != NULL && "Pointer to the y_size is NULL.");

    fprintf (stdout, "Enter the y-size of triangle matrix:");

    while (scanf ("%Iu", y_size) != 1 || InputCheck()) {

        fprintf (stdout, "Entered y-size of triangle matrix is incorrect! Try once again.");
        InputClear();
    }

    *matrix_size = (*y_size * (*y_size + 1) / 2);
    double *triangle_matrix = (double *) calloc (*matrix_size, sizeof (double));

    assert (triangle_matrix != NULL && "Not enough memory. Program was finished.");

    fprintf (stdout, "Enter the elements of triangle matrix:");

    for (size_t i = 0; i < *matrix_size; i++)
        while (scanf ("%lf", &triangle_matrix[i]) != 1 || InputCheck()) {

            fprintf (stdout, "Entered number is incorrect! Try once again.");
            InputClear();
        }

    return triangle_matrix;
}

int InputCheck (void) {

    char symbol = 0;

    while ((symbol = (char) getchar()) != '\n') {

        if (symbol != ' ') {

            ungetc (symbol, stdin);
            return 1;
        }
    }

    ungetc (symbol, stdin);
    return 0;
}

void InputClear (void) {

    while (getchar() != '\n')
        continue;
}
