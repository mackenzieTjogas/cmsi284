#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* madlib(char* template, char* adjective, char* noun, char* verb) {
    int count = 0;
    char* newTemplate = template;
    while (newTemplate < (template + strlen(template))) {
        newTemplate = strstr(newTemplate, "%s");
        if (newTemplate == NULL) {
            break;
        }
        count++;
        newTemplate = newTemplate + 2;
    }
    if (count <= 3) {
        int stringLength = strlen(template) + strlen(adjective) + strlen(noun) + strlen(verb);
        char* madlibString = (char*)malloc(sizeof(char) * stringLength + 1);
        sprintf(madlibString, template, adjective, noun, verb);
        return madlibString;
    }
    else {
        return 0;
    }
}
