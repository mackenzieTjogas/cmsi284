#include "reverse-range-in-place.h"
#include <string.h>
#include <stdio.h>

//I decided to treat the extra spaces as letters. 

void reverse_words(char* string) {
    
    int start_index = 0;
    int end_index = 0;
    
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == ' ') {
            reverse_range_in_place(string, start_index, end_index - 1);
            start_index = i + 1;
            end_index = i + 1;
        } else {
            end_index++;
        }
    }
    reverse_range_in_place(string, start_index, end_index);
    reverse_range_in_place(string, 0, strlen(string));
    
}
