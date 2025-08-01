//
// Created by Ghala Buarish on 8/1/25.
//

#ifndef ELL_SPMV_H
#define ELL_SPMV_H

const static int ROWS = 4;
const static int MAX_NNZ  = 3;
const static int TOTAL = ROWS * MAX_NNZ * 2 + 4; // ell_values + ell_col_index + x

typedef float DTYPE;

void spmv_ell(DTYPE data_in[TOTAL], DTYPE y[ROWS]);

#endif //ELL_SPMV_H
