#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* madlib(char* template, char* adjective, char* noun, char* verb) {
    int stringLength = strlen(template) + strlen(adjective) + strlen(noun) + strlen(verb);
    char* madlibString = (char*)malloc(sizeof(char) * stringLength + 1);
    sprintf(madlibString, template, adjective, noun, verb);
    return madlibString;
}
