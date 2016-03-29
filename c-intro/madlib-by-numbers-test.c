#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "madlib-by-numbers.h"


int main() {
    char* template = "The 1 2 likes to 9 in the moonlight.";
    char* words_to_use[]= {"swim", "brilliant", "frog"};
    int word_count = 3;
    char* madlibS = "The brilliant frog likes to 9 in the moonlight.";
    int length = findNewLength(template, word_count, words_to_use);
    int mlLegnth = length;
    
    char* original = madlib_by_numbers("The 1 2 likes to 9 in the moonlight.", word_count, words_to_use);
    assert(strncmp(madlibS, original, mlLegnth) == 0);
    free(original);
     
}
