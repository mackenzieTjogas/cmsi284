
#include "chord.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* keyboard[13] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};

void majorKey(char* key) {
    char* original = key;
    char* keyTwo;
    char* keyThree;
    for (int i = 0; i < 12; i++) {
        if (strncmp(key, keyboard[i], 12) == 0) {
            keyTwo = keyboard[((i+4)%12)];
            keyThree = keyboard[((i+7)%12)];
            break;
        }
    }
    printf("%s: %s %s %s\n", original, original, keyTwo, keyThree);
}

void minorKey(char* key) {
    char* original = key;
    char* keyTwo;
    char* keyThree;
            
    for (int i = 0; i < 12; i++) {
        if (strncmp(key, keyboard[i], 12) == 0) {
            keyTwo = keyboard[((i+3)%12)];
            keyThree = keyboard[((i+7)%12)];
            break;
        }
    }
    printf("%sm: %s %s %s\n", original, original, keyTwo, keyThree);
}

void domSeventh(char* key) {
    char* original = key;
    char* keyTwo;
    char* keyThree;
    char* keyFour;
    for (int i = 0; i < 12; i++) {
        if (strncmp(key, keyboard[i], 12) == 0) {
            keyTwo = keyboard[((i+4)%12)];
            keyThree = keyboard[((i+7)%12)];
            keyFour = keyboard[((i+10)%12)];
            break;
        }
    }
    printf("%s7: %s %s %s %s\n", original, original, keyTwo, keyThree, keyFour);
}

void dimSeventh(char* key) {
    char* original = key;
    char* keyTwo;
    char* keyThree;
    char* keyFour;
            
    for (int i = 0; i < 12; i++) {
        if (strncmp(key, keyboard[i], 12) == 0) {
            keyTwo = keyboard[((i+3)%12)];
            keyThree = keyboard[((i+6)%12)];
            keyFour = keyboard[((i+9)%12)];
            break;
        }
    }
    printf("%sdim7: %s %s %s %s\n", original, original, keyTwo, keyThree, keyFour);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("please enter a single key\n");
    }
    majorKey(argv[2]);
    minorKey(argv[2]);
    domSeventh(argv[2]);
    dimSeventh(argv[2]);
    return 0;
}

