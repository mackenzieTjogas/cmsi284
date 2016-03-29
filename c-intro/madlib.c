#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* madlib(char* template, char* adjective, char* noun, char* verb) {
    int stringLength = strlen(template) + strlen(adjective) + strlen(noun) + strlen(verb);
    char* madlibString = malloc(stringLength + 1);
    sprintf(madlibString, template, adjective, noun, verb);
    return madlibString;
}

int main(int argc, char* argv[]) {
    printf("%s \n", madlib(argv[1], argv[2], argv[3], argv[4]));
    
    return 0;
}
