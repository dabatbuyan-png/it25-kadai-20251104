#include "kadai3.h"
#include <stdio.h>

void convert(int year) {
    // TODO: 実装
    if (year >= 2019) {
        printf("令和%d年\n", year - 2018);
    } else if (year >= 1989) {
        printf("平成%d年\n", year - 1988);
    } else if (year >= 1926) {
        printf("昭和%d年\n", year - 1925);
    } else {
        printf("対象外\n");
    }
}

void convert(const char era[], int year) {
    // TODO: 実装
    if (year >= 2019) {
        printf("%d年\n", year - 2018);
    } else if (year >= 1989) {
        printf("%d年\n", year - 1988);
    } else if (year >= 1926) {
        printf("%d年\n", year - 1925);
    } else {
        printf("不明な元号\n");
    }
}