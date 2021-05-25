#include <stdio.h>
#include <stdarg.h>
#include "algo2char-V2.h"


void mi_printf(char str[], ...);
void ejecuto( void (*convert)(int), int );

int main (void)
{
    char str[] = {"imprimo un decimal %d, imprimo un hexa %x, imprimo un char %c"};
    
    mi_printf(str, -57, 65, 'a');
    
    return 0;
}
void mi_printf(char str[], ...)
{
    int output, j;
    va_list list;
    va_start(list, str);
    
    
    for (j=0; str[j]!='\0'; j++)                                                //recorro el string, para saber cuantos argumentos variables voy a tener
    {
        if (str[j]!='%')
        {
            putchar(str[j]);
        }
        if (str[j]=='%')                                                        /*cuando detener un '%', voy a chequear si el siguiente es una letra d, c o x*/
        {
            switch(str[j+1])
            {                                                                   //verifico si es una c, d o x
                case 'c':                                                       //si es 'c' sumo 1 en la cant de argumentos variables de tipo char
                    output = va_arg(list, int);                                 //tomo el argumento variable
                    putchar(output);
                    j++;
                    break;
                case 'd':                                                       //si es 'd' sumo 1 en la cant de argumentos variables de tipo int
                    output = va_arg(list, int);
                    ejecuto(&int2char, output);                                 //llamo a la funcion ejecuto y le mando el adress de la funcion int2char con su argumento
                    j++;
                    break;
                case'x':                                                        //si es 'x' sumo 1 en la cant de argumentos variables de tipo hexa
                    output = va_arg(list, int);
                    ejecuto(&hexa2char, output);                                //llamo a la funcion ejecuto y le mando el adress de la funcion hexa2char con su argumento
                    j++;
                    break;
                default:
                    break;
            }
        }
    }
    
    va_end(list);
}

/*******************************************************************************
 * La funcion recibe un puntero a funcion y un entero.
 * El puntero a funcion no devuelve nada y recibe un int como argumento.
 ******************************************************************************/
void ejecuto( void (*convert)(int), int a )
{
    convert(a);
}