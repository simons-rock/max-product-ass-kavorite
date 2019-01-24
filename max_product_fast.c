#include "max_product.h"

int max_pairwise_product_fast(int * arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            int p = arr[i] * arr[j];
            if (p > max) {
                max = p;
            }
        }
    }
    return max;
}
