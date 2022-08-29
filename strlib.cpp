#include "strlib.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>

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

String strCpy (String s1, const String s2) {
    int s2len = strLen(s2);

    for (int i = 0; i < s2len; i++) {
        s1[i] = s2[i];
    }

    return s1;
}

char* strChr (const String str, int ch) {
    char* ptr = NULL;
    int strl = strLen(str);
    
    for (int i = 0; i < strl && ptr == NULL; i++) {
        if (str[i] == (char)ch) {
            ptr = str + i;
        }
    }
    
    return ptr;
}

char* strrChr (const String str, int ch) {
    char* ptr = NULL;
    int strl = strLen(str) - 1;
    
    for (int i = strl; i > -1 && ptr == NULL; i--) {
        if (str[i] == (char)ch) {
            ptr = str + i;
        }
    }
    
    return ptr;
}

int strCmp (const String s1, const String s2) {
    int l1 = strLen(s1);
    int l2 = strLen(s2);

    int l = min(l1, l2);

    for (int i = 0; i < l; i++) {
        if (s1[i] < s2[i]) {
            return -1;
        }
        if (s1[i] > s2[i]) {
            return 1;
        }
    }

    if (l1 < l2) {
        return -1;
    }
    if (l1 > l2) {
        return 1;
    }

    return 0;
}

String strCat (String s1, const String s2) {
    assert(s1 != NULL && s2 != NULL && "the string mustnt be NULL\n");

    int s1len = strLen(s1);
    int s2len = strLen(s2);
    
    for(int i = 0; i < s2len; i++){
        s1[i + s1len] = s2[i];
    }

    return 
}

#undef EOF
#undef NULLBYTE