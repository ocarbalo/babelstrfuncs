#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include <stdio.h>

size_t cmnLenght(const char* str);
char*  cmnCapitalize(const char* str);
void   cmnStrCpy(const char* src, char* trg);
void cmnStrCpyToPos(const char* src, char* trg, int pos);

#endif // COMMON_H_INCLUDED
