#include "kadai4.h"

#include <_printf.h>

void drawTree(int h) {
    // TODO: 実装
    for (int i = 0; i < h; i++) {
        printf("*");
    }
    for (int i = 0; i < h; i++) {
        printf(" ");
    }
    printf("\n");
}