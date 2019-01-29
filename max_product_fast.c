#include "max_product.h"

int max_pairwise_product_fast(int * arr, int size) {
    int i_max = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i_max]) {
            i_max = i;
        }
    }
    int i_sndmax = 0;
    for (int i = 0; i < size; i++) {
        if (i_sndmax == i_max) continue;
        if (arr[i] > arr[i_sndmax]) {
            i_sndmax = i;
        }
    }
    return arr[i_max * i_sndmax];
}
