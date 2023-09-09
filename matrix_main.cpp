#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "print_matrix.h"
#include "matrix_consts.h"
#include "matrix_input.h"

int main (void) {

    double matrix_for_test [sizeY_test_matrix][sizeX_test_matrix] = { {  0 ,  1 ,  2 ,  3 ,  4 },
                                                                      { 10 , 11 , 12 , 13 , 14 },
                                                                      { 20 , 21 , 22 , 23 , 24 },
                                                                      { 30 , 31 , 32 , 33 , 34 },
                                                                      { 40 , 41 , 42 , 43 , 44 }  };

    BadPrintMatrix (matrix_for_test, sizeY_test_matrix, sizeX_test_matrix);
    GoodPrintMatrix (&matrix_for_test[0][0], sizeY_test_matrix, sizeX_test_matrix);

   // MultiplicateMatrix (first_matrix, second_matrix);

    size_t sizeY_triangle_arr = 0;
    size_t size_of_triangle_arr = 0;

    double *TriangleMatrix = InputTriangle(&size_of_triangle_arr, &sizeY_triangle_arr);

    PrintAllTriangleMatrix(TriangleMatrix, sizeY_triangle_arr, size_of_triangle_arr);

    return 0;
}
