#include "revert_string.h"
#include <string.h>
void swap(char* a, char* b){
    char c = *a;
    *a = *b;
    *b = c;
}	

void RevertString(char* str) {
    // handle the special case when it is an empty string
    if (!*str) {
        return;
    }

    // mark down the begin of the string
    char* begin = str;

    // pointing to the last character
    char* end = begin + strlen(str) - 1;

    // swap begin and end
    while (begin < end) {
        swap(begin, end);
        begin++;
        end--;
    }
}

