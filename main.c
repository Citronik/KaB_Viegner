#include <stdio.h>
#include <string.h>
#include "Trio.h"

char * cText = "UYCKTL TAERJNNJBD AUOUYGI JNNZRCRSQO H GUOCSWSRSQO QOIYRO, DRJHN PYOEDLDXDVPWOZHR VFGTYACE JLRWOAZRVFQQ ZUOTOC FNFLFNNJBNHV HNXAI E RVNWYJV TOKCEYJV JBLQNDHQQ (TLZNGYOONH, HNLLUAAMBJ S TSMZLFXU, HGLIP, ZJTPB2, ...). DRJHN PYOEDLDXDVPWOZHR DCCSIJ OS TYCSIJ NWARCE. NH NJKSOME TSAAUW WACFQNPHN NHVXDUM PEUSAAACA SSCE DHBNHV XJZFYJ.";


void clearOutText(const char * text, char * clearedText) {
    int index = 0;
    for(int i = 0; i < strlen(text); i++ ) {
        if ( text[i] - 'A' >=  0 && text[i] - 'A' <=  26 ) {
            clearedText[index] = text[i];
            index++;
        }
    }
    clearedText[index] = '\n';
    printf("%s \n", clearedText);
}

void findDuplicity(const char * text, TRIO * trios, int number) {
    int x = 0;
    int size = (int)strlen(text);
    for(int i = 0; i < size; i++ ) {
        for (int j = i+2; j < size; j++) {
            int index = 0;
            while (text[i+index] == text[j+index]) {
                if (index >= number-1){
                    TRIO* newTrio = &trios[x];
                    memcpy( &(*newTrio).letters, &text[i], number );
                    newTrio->size = number;
                    (*newTrio).letters[number] = '\n';
                    (*newTrio).sizeBetween = j-i;
                    printOut(newTrio);
                    x++;
                    break;
                }
                index++;
            }
        }
    }
}

int findSizeOfKey(TRIO * trios, int * divisors, int keyLengtFrom, int keyLengthTo) {

    TRIO * trio = trios;
    while ( strcmp(trio->letters, "") /*!=0*/) {
        for (int i = keyLengtFrom; i <= keyLengthTo; i++) {
            if (trio->sizeBetween%i == 0) {
                divisors[i-keyLengtFrom]++;
            }
        }
        trio++;
    }
    int best = divisors[0];
    int bestIndex = 0;
    for (int i = 1; i < keyLengthTo-keyLengtFrom+1; i++) {
        if (divisors[i] >= best) {
            best = divisors[i];
            bestIndex = i;
        }
    }

    return bestIndex+keyLengtFrom;
}

void findKey(char *text, char *key, int keyLength) {
    for (int i = 0; i < keyLength; ++i) {
        char *letter = text;
        int index = 0;
        double alphabet[25];
        double summ = 0;
        while (strstr (letter, "\n")) {
            if (index % keyLength == 0 + i) {
                int alpha = *letter - 'A';
                alphabet[alpha]++;
                summ++;
            }
            letter++;
            index++;
        }
        double lowest = 10;
        int lowestIndx = 0;
        for (int j = 0; j < 25; ++j) {
            //  alphabet[j]*(alphabet[j]-1)
            //= ---------------------------
            //      summ*(summ-1)
            double IC = (alphabet[j]*(alphabet[j]-1)) / (summ*(summ-1));
            printf ("[%c] - %f \n", j + 'A', IC);
            if (IC < lowest) {
                lowest = IC;
                lowestIndx = j;
            }
        }
        key[i] = (char)(lowestIndx + 'A');
    }
    key[keyLength] = '\n';
    printf("KEY: %s \n", key);
}

void decrypt(char * text, char* key) {
    char decrypted[strlen(text)];
    for (int i = 0; i < strlen(text); ++i) {
        decrypted[i] = (char)(((text[i] - 'A') - (key[i%(strlen(key)-1)] - 'A'))%26 + 'A');

        //printf("%c", text[i]-key[i%(strlen(key)-1)]);
    }
    printf("%s\n" , decrypted);
}

int main(int argc, char *argv[]) {
    char clearedText[strlen(cText)];
    TRIO trios[strlen(cText)/3];
    int keyLengtMin = 3;
    int keyLengtMax = 15;
    if (argc >= 2) {
        keyLengtMin = (int)argv[1];
    }
    if (argc >= 3) {
        keyLengtMax = (int)argv[1];
    }

    printf("%ld\n", strlen(cText));
    clearOutText(cText, clearedText);
    findDuplicity(clearedText, trios, 3);
    int i = 0;
    TRIO * trio = trios;
    while ( strcmp(trio->letters, "") ) {
        printf("{%d} %s, ", trio->sizeBetween, trio->letters);
        if ((i+1)%12 == 0) {
            printf("\n");
        }
        i++;
        trio++;
    }
    keyLengtMax-keyLengtMin+1;
    int divisors[15-3+1];
    int prpblyKeyLength = findSizeOfKey(trios, divisors, 3 , 15);
    printf("%d \n", prpblyKeyLength);
    for (int j = 0; j < 15-3+1; ++j) {
        printf("|  %d - %d  |", j+3, divisors[j]);
    }
    printf("\n");
    //prpblyKeyLength = 5;
    char key[prpblyKeyLength];
    findKey(clearedText, key, prpblyKeyLength);
    decrypt(clearedText, key);
    return 0;
}