#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "madlib.h"


int main (int argc, char* argv[]) {
    char* template= "Hi how are you %s %s I'm pretty %s.";
    char* adjective = "tall";
    char* noun = "today";
    char* verb = "running";
    int length = strlen(template) + strlen(adjective) + strlen(noun) + strlen(verb);
    char* madlibS = madlib(template, adjective, noun, verb);
    
    char* finishedString = "Hi how are you tall today I'm pretty running.";
    
    assert(strncmp(madlibS, finishedString, length) == 0);
    free(madlibS);
    
}
