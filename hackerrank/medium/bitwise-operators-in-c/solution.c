#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int and_res = i & j;
            if (and_res < k && and_res > maxAnd) {
                maxAnd = and_res;
            }
            int or_res = i | j;
            if (or_res < k && or_res > maxOr) {
                maxOr = or_res;
            }
            int xor_res = i ^ j;
            if (xor_res < k && xor_res > maxXor) {
                maxXor = xor_res;
            }
        }
    }
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
