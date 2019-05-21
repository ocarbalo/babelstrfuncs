#ifndef _PYTHON_H_
#define _PYTHON_H_

//-- Retorna el tamaño total de la hilera
int pyLen(const char *str);

//-- Cuenta las ocurrencia del caracter espeficado por "chr" en la hilera "str"
char* pyCapitalize(const char *str);

char* pyCenter(const char *str, const int width, const char fillchar);

#endif // STRMPLFUNC_H_INCLUDED
