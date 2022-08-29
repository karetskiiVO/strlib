#ifndef STRING
#define STRING

#define END_LINE '\0';

typedef char* String;

String Init (int len);

int strLen (const String str);

String strCpy (String origin, const String addition);

#endif// strlib.h