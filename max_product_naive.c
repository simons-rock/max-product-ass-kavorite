#include "max_product.h"

int max_pairwise_product_naive(int * arr, int size) {
    int max = arr[0] * arr[1];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j) {
                int p = arr[i] * arr[j];
                if (p > max) {
                    max = p;
                }
            }
        }
    }
    return max;
}
