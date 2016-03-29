#include "reverse-words.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main(int argc, char* argv[]) {
    char words_to_use[] = "Nice to meet you";
    int length = strlen(words_to_use);
    reverse_words(words_to_use);
    char* reversed_version = "you meet to Nice";
    assert(strncmp(words_to_use, reversed_version, length) == 0);
    
    char words_to_use2[] = "Goodbye friend! See you later.";
    int length2 = strlen(words_to_use);
    reverse_words(words_to_use2);
    char* reversed_version2 = "later. you See friend! Goodbye";
    assert(strncmp(words_to_use2, reversed_version2, length2) == 0);
    
    char words_to_use3[] = "Well    hello there";
    int length3 = strlen(words_to_use);
    reverse_words(words_to_use3);
    char* reversed_version3 = "there hello    Well";
    assert(strncmp(words_to_use3, reversed_version3, length3) == 0);
    
    char words_to_use4[] = "Well    hello  !  there";
    int length4 = strlen(words_to_use);
    reverse_words(words_to_use4);
    char* reversed_version4 = "there  !  hello    Well";
    assert(strncmp(words_to_use4, reversed_version4, length4) == 0);

}

