#include <stdio.h>
#include <stdlib.h>
#include "python.h"
#include "string.h"

int main()
{
    /*-- Funciones con el nombre utilizado por phyton --*/
    char *pyVal = "hola mundo";
    int len   = pyLen(pyVal);
    printf("El largo de la hilera '%s' es %d\n\n", pyVal, len);


    char *pyLower = "hilera en minuscula";
    char *pyCap   = pyCapitalize(pyLower);
    printf("Hilera capitalizada: '%s'", pyCap);
    free(pyCap);



    return 0;
}
