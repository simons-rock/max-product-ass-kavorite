#include "max_product.h"

int max_pairwise_product_fast(int * arr, int size) {
    int max = arr[0] * arr[1];
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (p > max) {
                max = p;
            }
        }
    }
    return max;
}
