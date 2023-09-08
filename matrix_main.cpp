#include <stdio.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "print_matrix.h"
#include "matrix_consts.h"

int main (void) {

    double matrix [sizeY][sizeX] = { {  0 ,  1 ,  2 ,  3 ,  4 },
                                     { 10 , 11 , 12 , 13 , 14 },
                                     { 20 , 21 , 22 , 23 , 24 },
                                     { 30 , 31 , 32 , 33 , 34 },
                                     { 40 , 41 , 42 , 43 , 44 }  };

    BadPrintMatrix (matrix);
    GoodPrintMatrix (&matrix[0][0]);

   // MultiplicateMatrix (first_matrix, second_matrix);

    return 0;
}
