//
// Created by Ghala Buarish on 7/17/25.
//

#include "CSR_baseline.h"

void spmv(int rowPtr[NUM_ROWS+1], int columnIndex[NNZ],
DTYPE values[NNZ], DTYPE y[SIZE], DTYPE x[SIZE])
{
	L1: for (int i = 0; i < NUM_ROWS; i++) {
		DTYPE y0 = 0;
		L2: for (int k = rowPtr[i]; k < rowPtr[i+1]; k++) {
			y0 += values[k] * x[columnIndex[k]];
		}
		y[i] = y0;
	}
}

