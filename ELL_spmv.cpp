//
// Created by Ghala Buarish on 8/1/25.
//

#include "ELL_spmv.h"

#include <stdio.h>

void spmv_ell(DTYPE data_in[TOTAL], DTYPE y[ROWS]) {
	DTYPE ell_values[ROWS][MAX_NNZ];
	int ell_col_index[ROWS][MAX_NNZ];
	DTYPE x[ROWS];

	int currInd = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < MAX_NNZ; j++) {
			ell_values[i][j] = data_in[currInd++];
		}
	}
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < MAX_NNZ; j++) {
			ell_col_index[i][j] = (int)data_in[currInd++];
		}
	}
	for (int i = 0; i < ROWS; i++) {
		x[i] = data_in[currInd++];
	}
	for (int i = 0; i < ROWS; i++) {
		y[i] = 0;
		for (int j = 0; j < MAX_NNZ; j++) {
			int col = ell_col_index[i][j];
			if (col != -1) {
				y[i] += ell_values[i][j] * x[col];
			}
		}
	}
}



