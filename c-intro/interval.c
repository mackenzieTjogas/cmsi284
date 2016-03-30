#include "interval.h"
#include <stdio.h>
#include <string.h>

char* keyboard[] = {"C","C#","D","D#","E","F","F#","G","G#","A","A#","B"};

char* interval[] = {
    "minor second",
    "major second",
    "minor third",
    "major third",
    "perfect fourth",
    "tritone",
    "perfect fifth",
    "minor sixth",
    "major sixth",
    "minor seventh",
    "major seventh",
    "perfect octave"
};

int findDiff(char* firstKey, char* secondKey) {
    int difference;
    int firstIndex = 0;
    int secondIndex = 0;
    for (int i = 0; i < 12; i++) {
        if (strcmp(firstKey, keyboard[i]) == 0) {
            firstIndex = i;
        }
        if (strcmp(secondKey, keyboard[i]) == 0) {
            secondIndex = i;
        }
    }
    if (firstIndex <= secondIndex) {
        difference = secondIndex - firstIndex;
    } else {
        difference = 12 - firstIndex + secondIndex;
    }
    return difference;
}

int main(int argc, char* argv[]) {
    int intervalIndex = findDiff(argv[1], argv[2]);
    char* intervalName;
    for (int i = 0; i < 12; i++) {
        if (intervalIndex == 0) {
            intervalName = "perfect octave";
        } else if (intervalIndex == i) {
            intervalName = interval[i - 1];
        }
    }
    printf("%s to %s is a %s\n", argv[1], argv[2], intervalName);
    return 0;
}
