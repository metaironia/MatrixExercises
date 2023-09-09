#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "print_matrix.h"
#include "matrix_consts.h"

void BadPrintMatrix (const double matrix[5][5], const size_t sizeY, const size_t sizeX) {

    assert (matrix != NULL && "Pointer to the matrix is null.");

    fprintf (stdout, "Printing using BadPrintMatrix function:\n");

    for (size_t y = 0; y < sizeY; y++) {

        for (size_t x = 0; x < sizeX; x++)
            fprintf (stdout, "matrix[%d][%d] = %lf ", y, x, matrix[y][x]);

        fprintf (stdout, "\n");
    }

    fprintf (stdout, "\n");
}

void GoodPrintMatrix (const double *const matrix, const size_t sizeY, const size_t sizeX) {

    assert (matrix != NULL && "Pointer to the matrix is null.");

    fprintf (stdout, "Printing using GoodPrintMatrix function:\n");

    size_t matrix_full_size = sizeX * sizeY;

    for (size_t counter = 0; counter < matrix_full_size; counter++) {

        fprintf (stdout, "matrix[%d][%d] = %lf ", counter / 5, counter % 5,
                 *((const double *const) matrix + counter));

        if ((counter + 1) % sizeX == 0 && counter != 0)
            fprintf (stdout, "\n");

    }

    fprintf (stdout, "\n");
}

void PrintOneTriangleMatrix (const double *matrix, const size_t y_pos, const size_t x_pos,
                             const size_t size_of_matrix) {

    assert (matrix != NULL && "Pointer to the matrix is null.");

    assert (GetPosTriangleArr (x_pos, y_pos) <= size_of_matrix);

    fprintf (stdout, "matrix[%d][%d] = %lf ",y_pos, x_pos, *(matrix + GetPosTriangleArr (x_pos, y_pos)));
}


void PrintAllTriangleMatrix (const double *matrix, const size_t sizeY, const size_t size_of_matrix) {

    assert (matrix != NULL && "Pointer to the matrix is null.");

    for (size_t y = 0; y < sizeY; y++) {

        for (size_t x = 0; x < y + 1; x++)
            PrintOneTriangleMatrix (matrix, y, x, size_of_matrix);

        fprintf (stdout, "\n");
    }

}

size_t GetPosTriangleArr (const size_t x, const size_t y) {

    return (y*(y + 1) / 2) + x;

}
