//
// Created by Filip on 6. 10. 2022.
//

#ifndef VIEGNER_TRIO_H
#define VIEGNER_TRIO_H

#include <stdio.h>
#include <string.h>

typedef struct trio{
    char letters[4];
    int sizeBetween;
    int size;
}TRIO;

void printOut(TRIO * trio);

#endif //VIEGNER_TRIO_H
