#include "python.h"
#include "stddef.h"
#include "common.h"
#include "math.h"

//------------------------------------------------------------------------------------------------

int pyLen(const char* str)
{
    return cmnLenght(str);
}

//------------------------------------------------------------------------------------------------

char* pyCapitalize(const char *str)
{
    return cmnCapitalize(str);
}

/**
Retorna la hilera de caracteres centrada y rellenada a los lados por espacios en blanco o un
caracter especificado por el usuario
*/
char* pyCenter(const char *str, const int width, const char fillchar)
{
    char* buff = NULL;
    int ln     = cmnLenght(str);     //-- Obtiene el tamanio de la hilera
    int diff   = width - ln;         //-- Obtiene la diferencia de tama�o entre la hilera y el tama�o solicitado por par�metro

    //-- Si la hilera es m�s grande o igual que el tama�o solicitado,
    //-- solamente retorna una copia de la hilera original
    if (ln >= width)
    {
        buff = malloc(ln+1);         //-- Solicita la memoria
        if (buff)                    //-- Verifica que haya sida asignada
            strcpy(str, buff);       //-- Copia la hilera de entrada al buffer de retorno
        //--
        return buff;                 //-- Retorna la copia de la hilera o NULL si no se asigna la memoria
    }
    //-- Si el tama�o es menor, si realiza el relleno seg�n los par�metros
    else
    {
      /*  buff = malloc(ln+1);
        double lPadSize = round(diff/2);
        double rPadSize = diff-rPadSize;
        for(int i=0 i <= lPadSize; i++)
            buf[i] = ' ';
        cmnStrCpyToPos(str, buff, lPadSize);*/


    }
}
