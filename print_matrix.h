#ifndef PRINT_MATRIX_H_INCLUDED
#define PRINT_MATRIX_H_INCLUDED

#include "matrix_consts.h"

void BadPrintMatrix (const double matrix[5][5], const size_t sizeY, const size_t sizeX);

void GoodPrintMatrix (const double *const matrix, const size_t sizeY, const size_t sizeX);

void PrintOneTriangleMatrix (const double *matrix, const size_t y_pos, const size_t x_pos,
                             const size_t size_of_matrix);

void PrintAllTriangleMatrix (const double *matrix, const size_t sizeY, const size_t size_of_matrix);

size_t GetPosTriangleArr (const size_t x, const size_t y);

#endif
