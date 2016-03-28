// Users/mackenzietjogas/Documents/284csocode/chord.h//  chord.c
//  
//
//  Created by Mackenzie Tjogas on 3/20/16.
//
//

#include "chord.h"
//so that I can run printf
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

char* minorKey(char* key) {
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
    printf("%s: %s %s %s\n", original, original, keyTwo, keyThree);
}


int main(int argc, char* argv[]) {
    majorKey(argv[2]);
    minorKey(argv[2]);
    
    return 0;
}
