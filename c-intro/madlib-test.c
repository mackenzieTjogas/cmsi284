
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
    if (madlibS != 0) {
        free(madlibS);
    }
    
    char* template2 = "Look at the %s %s! Why is it %s?";
    char* adjective2 = "sad";
    char* noun2 = "cat";
    char* verb2 = "running";
    int length2 = strlen(template2) + strlen(adjective2) + strlen(noun2) + strlen(verb2);
    char* madlibS2 = madlib(template2, adjective2, noun2, verb2);
    char* finishedString2 = "Look at the sad cat! Why is it running?";
    
    assert(strncmp(madlibS2, finishedString2, length2) == 0);
    if (madlibS2 != 0) {
        free(madlibS2);
    }
    
    
    char* template3 = "Look at the %s %s! Why is it %s?";
    char* adjective3 = "great";
    char* noun3 = "thing";
    char* verb3 = "great";
    int length3 = strlen(template3) + strlen(adjective3) + strlen(noun3) + strlen(verb3);
    char* madlibS3 = madlib(template3, adjective3, noun3, verb3);
    char* finishedString3 = "Look at the great thing! Why is it great?";
    
    assert(strncmp(madlibS3, finishedString3, length3) == 0);
    if (madlibS3 != 0) {
        free(madlibS3);
    }
    
    char* template4 = "Oh wow look at that %s %s, why is it %s?";
    char* adjective4 = "blue";
    char* noun4 = "unicorn";
    char* verb4 = "dancing";
    int length4 = strlen(template4) + strlen(adjective4) + strlen(noun4) + strlen(verb4);
    char* madlibS4 = madlib(template4, adjective4, noun4, verb4);
    char* finishedString4 = "Oh wow look at that blue unicorn, why is it dancing?";
    
    assert(strncmp(madlibS4, finishedString4, length4) == 0);
    if (madlibS4 != 0) {
        free(madlibS4);
    }
    
    char* template5 = "Oh wow look at that %s %s why is it %s %s?";
    char* adjective5 = "blue";
    char* noun5 = "unicorn";
    char* verb5 = "dancing";
    int length5 = strlen(template5) + strlen(adjective5) + strlen(noun5) + strlen(verb5);
    char* madlibS5 = madlib(template5, adjective5, noun5, verb5);
    char* finishedString5 = "Please only give me three things to replace!";
    
    assert(madlibS5 == 0);
    if (madlibS5 != 0) {
        free(madlibS5);
    }

}
