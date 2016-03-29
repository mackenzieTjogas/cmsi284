#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "madlib-by-numbers.h"

#include <stdio.h>

int main() {
    char* template = "The 1 2 likes to 9 in the moonlight.";
    char* words_to_use[]= {"swim", "brilliant", "frog", "hi"};
    int word_count = 4;
    char* madlibS = "The brilliant frog likes to 9 in the moonlight.";
    int length = findNewLength(template, word_count, words_to_use);
    int mlLength = length;
    
    char* original = madlib_by_numbers("The 1 2 likes to 9 in the moonlight.", word_count, words_to_use);
    assert(strncmp(madlibS, original, mlLength) == 0);
    
    
    char* template2 = "The 1 2 likes to 3 in the moonlight.";
    char* words_to_use2[]= {"swim", "brilliant", "frog", "hi"};
    int word_count2 = 4;
    char* madlibS2 = "The brilliant frog likes to hi in the moonlight.";
    int length2 = findNewLength(template2, word_count2, words_to_use2);
    int mlLength2 = length2;
    
    char* original2 = madlib_by_numbers(template2, word_count2, words_to_use2);
    
    assert(strncmp(madlibS2, original2, mlLength2) == 0);
    free(original);
    free(original2);
}

