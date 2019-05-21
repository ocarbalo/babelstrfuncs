#include "common.h"
#include "stddef.h"
#include "stdlib.h"

#define NUL 0
//------------------------------------------------------------------------------------------------

/**
 * Retorna el tamaño de una hilera de caracteres.
 * Ejemplo: blocks -> 6
 * @str: Hilera a la cual se desea calcular su largo

*/
size_t cmnLenght(const char* str)
{
    int idx = 0;               //--  idx almacena el indice y a su vez el tamaño total de la hilera
    //--
    if (str)                   //-- Verifica que la variable no sea un puntero nulo
        while(str[idx] != NUL) //-- Verifica cada uno de los caracteres hasta encontrar el caracter de fin 0 (equivalente a '\0'
            idx++;
    //--
    return idx;
}

//------------------------------------------------------------------------------------------------

/**
 * Retorna una copia de la hilera de caracteres recibida por parámetro
   pero con la primer letra en mayúscula. La memoria debe ser liberada
   por el invocador de la función
   Ejemplo: code -> Code
 * @str: Hilera a convertir
 */

char* cmnCapitalize(const char* str)
{
    int chrCap = 0;
    int ln     = cmnLenght(str);       //-- Obtiene el tamanio de la hilera
    char* buff = (char*)calloc(ln + 1, sizeof(char));//-- Asigna la memoria para recibir la copia, +1 para el caracter de fin
    //--
    if (buff)                          //-- Verifica que la memoria haya sido asignada
        cmnStrCpy(str, buff);          //-- Copia la hilera de entrada en el buffer
    //--
    chrCap = buff[0];                  //-- Obtiene el primer caracter de la copia

    //-- Verifica que el primer caracter esté en minúscula,
    //-- utilizando su código ascii. 97 = a, 122 = z. Resta 32 para convertirlo a mayúscula.
    if (chrCap >= 97 && chrCap <= 122)
        chrCap = chrCap - 32;

    buff[0] = chrCap;                   //-- Sustituye el primer caracter de la hilera
    return buff;
}

//------------------------------------------------------------------------------------------------

/**
 * Copia una hilera de caracteres en otra
 * @
*/
void cmnStrCpy(const char* src, char* trg)
{
    int i=0;
    for(i=0; src[i] != NUL; i++)
        trg[i] = src[i];
    //--
    trg[i] = NUL;
}

//------------------------------------------------------------------------------------------------

/**
 * Copia una hilera de caracteres en otra
 * @
*/
void cmnStrCpyToPos(const char* src, char* trg, int pos)
{
    int i=0;
    for(i=0; src[i] != NUL; i++)
        trg[++pos] = src[i];
    //--
    trg[i] = NUL;
}
