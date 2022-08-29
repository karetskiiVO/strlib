#include "strlib.h"

#include <stdio.h>

int main () {
    String s1 = Init(60);
    String s2 = Init(60);
    String s3 = "biba";
    String s4 = Init(10);

    strCpy(s2, "Aboba\0");
    strCpy(s1, "Boba\0");

    printf("%s %d\n", s1, strLen(s1));
    printf("%s %s\n", strCpy(s4, s3), s4);
    printf("%p %p\n", strChr(s1, 'B'), strChr(s1, 'b'));
    printf("%d %s %s\n", strCmp(s1, s2), s1, s2);
    printf("%d %s %s\n", strCmp(s2, s1), s2, s1);
    printf("%d %s %s\n", strCmp(s3, s3), s3, s3);
    printf("%s %s\n", strCat(s1, s2), s1);

    return 0;
}