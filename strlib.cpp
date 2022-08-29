#include "strlib.h"

#include <stdio.h>
#include <stdlib.h>

#define NULLBYTE '\0'
#define EOF -1

String Init (int len) {
    return (String)malloc(len * sizeof(char));
}

int strLen (const String str) {
    String str_buf = str;

    while (*str_buf != NULLBYTE) {
        str_buf++;
    }

    return str_buf - str;
}

String strCpy (String origin, const String addition) {
    int alen = strLen(addition);

    for (int i = 0; i < alen; i++) {
        origin[i] = addition[i];
    }

    return origin;
}

String strChr (const String str, int ch) {
    char* ptr = NULL;
    int strl = strLen(str);
    
    for (int i = 0; i < strl && ptr == NULL) {
        if (str[i] == (char)ch) {
            ptr = str + i;
        }
    }
    
    return ptr;
}

String strrChr (const String str, int ch) {
    
}





#undef EOF
#undef NULLBYTE