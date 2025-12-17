#include "kadai1.h"

char grade(int score) {
    if (score > 80) {
        return 'A';
    } else if (score > 60) {
        return 'B';
    } else if (score > 40) {
        return 'C';
    } else if (score > 0) {
        return 'F';
    }
}