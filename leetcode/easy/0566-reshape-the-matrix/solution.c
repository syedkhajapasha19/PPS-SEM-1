#include <stdio.h>

int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c,
                    int* returnSize, int** returnColumnSizes) {
    int m = matSize;
    int n = matColSize[0];

    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));
        for (int i = 0; i < m; i++) {
            (*returnColumnSizes)[i] = n;
        }
        return mat;
    }

    int** res = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));
    *returnSize = r;

    for (int i = 0; i < r; i++) {
        res[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (int k = 0; k < m * n; k++) {
        res[k / c][k % c] = mat[k / n][k % n];
    }

    return res;
}