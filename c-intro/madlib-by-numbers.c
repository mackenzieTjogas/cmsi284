
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int findNewLength(char* template, int word_count, char* words[]) {
    int count = 0;
    int stringLength = strlen(template);
    int var;
    for (int i = 0; i <= stringLength; i++) {
        if (isdigit(template[i])) {
            var = template[i] - '0';
            count += strlen(words[var]);
        } else {
            count++;
        }
    }
    return count;
}

char* madlib_by_numbers(char* template, int word_count, char* words[]) {
    int length = findNewLength(template, word_count, words);
    char* orderedMadlib = (char*)malloc(sizeof(char) * (length + 1));
    
    for (int i = 0; i <= strlen(template); i++) {
        if (!isdigit(template[i])) {
            strncat(orderedMadlib, &template[i], 1);
        } else {
            strcat(orderedMadlib, words[template[i] - '0']);
        }
    }
    return orderedMadlib;
}


