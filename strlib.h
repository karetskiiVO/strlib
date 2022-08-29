#ifndef STRING
#define STRING

typedef char* String;

String Init (int len);

int strLen (const String str);

String strCpy (String s1, const String s2);

char* strChr (const String str, int ch);

char* strrChr (const String str, int ch);

int strCmp (const String s1, const String s2);

String strCat (String s1, const String s2);

#endif// strlib.h