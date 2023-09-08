#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "print_matrix.h"
#include "matrix_consts.h"

void BadPrintMatrix (const double matrix[5][5]) {

    assert (matrix != NULL);

    for (int y = 0; y < sizeY; y++) {

        for (int x = 0; x < sizeX; x++)
            fprintf (stdout, "matrix[y][x] = %lf ", matrix[y][x]);

        fprintf (stdout, "\n");
    }

}

void GoodPrintMatrix (const double *const matrix) {

    assert (matrix != NULL);

    int matrix_full_size = sizeX * sizeY;

    for (int counter = 0; counter < matrix_full_size; counter++) {

        fprintf (stdout, "matrix[y][x] = %lf ", *((const double *const) matrix + counter));

        if ((counter + 1) % sizeX == 0 && counter != 0)
            fprintf (stdout, "\n");

    }
}

void PrintTriangleMatrix (const double *matrix) {

    assert (matrix != NULL);

    for (int y = 0; y < sizeY; y++) {

        for (int x = 0; x < y + 1; x++)
            fprintf (stdout, "matrix[y][x] = %lf ", *((const double *const) matrix + counter));

        fprintf (stdout, "\n");
    }

}
