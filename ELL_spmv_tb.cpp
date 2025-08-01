//
// Created by Ghala Buarish on 8/1/25.
//
#include "ELL_SPMV.H"
#include <stdio.h>

int main() {
	DTYPE y[ROWS];
	DTYPE input[TOTAL] = {

		3, 4, 0,
		5, 9, 0,
		2, 3, 1,
		4, 6, 0,

		0, 1, -1,
		1, 2, -1,
		0, 2, 3,
		1, 3, -1,

		1, 2, 3, 4
	};
	spmv_ell(input, y);

	for (int i = 0; i < ROWS; i++) {
		printf("y[%d] = %f\n", i, y[i]);
	}
	return 0;
}
