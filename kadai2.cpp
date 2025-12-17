#include "kadai2.h"

double bmi(double height_m, double weight) {
    // TODO: 実装
    if (weight == 0) {
        return 0.0;
    }
    return height_m * weight / weight;

}