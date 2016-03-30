#include <assert.h>
#include <string.h>
#include <stdlib.h>
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

    char* template3 = "0 3 nice weather we're 1.";
    char* words_to_use3[]= {"Hello", "having", "frog", "there"};
    int word_count3 = 4;
    char* madlibS3 = "Hello there nice weather we're having.";
    int length3 = findNewLength(template3, word_count3, words_to_use3);
    int mlLength3 = length3;
    
    char* original3 = madlib_by_numbers(template3, word_count3, words_to_use3);
    assert(strncmp(madlibS3, original3, mlLength3) == 0);
    
    char* template4 = "0 6 nice weather we're 1.";
    char* words_to_use4[]= {"Hello", "having", "frog", "there"};
    int word_count4 = 4;
    char* madlibS4 = "Hello 6 nice weather we're having.";
    int length4 = findNewLength(template4, word_count4, words_to_use4);
    int mlLength4 = length4;
    
    char* original4 = madlib_by_numbers(template4, word_count4, words_to_use4);
    assert(strncmp(madlibS4, original4, mlLength4) == 0);
    
    char* template5 = "0 612 nice weather we're 1.";
    char* words_to_use5[]= {"Hello", "having", "frog", "there"};
    int word_count5 = 4;
    char* madlibS5 = "Hello 6havingfrog nice weather we're having.";
    int length5 = findNewLength(template5, word_count5, words_to_use5);
    int mlLength5 = length5;
    
    char* original5 = madlib_by_numbers(template5, word_count5, words_to_use5);
    assert(strncmp(madlibS5, original5, mlLength5) == 0);

    free(original);
    free(original2);
    free(original3);
    free(original4);
    free(original5);
}


