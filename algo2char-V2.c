/***************************************************************************//**
  @file     algo2char.c 	// aca iria el nombre del archivo
  @brief    convierto int y hexa a char
  @author   carlos		// el nombre de quien escribio el archivo
 ******************************************************************************/

/*******************************************************************************
 * INCLUDE HEADER FILES
 ******************************************************************************/

// SIEMPRE incluir su propio header
#include "algo2char.h"


/*******************************************************************************
 *******************************************************************************
                        GLOBAL FUNCTION DEFINITIONS
 *******************************************************************************
 ******************************************************************************/

/*******************************************************************************
 * La funcion int2char, recibe un entero 'a'. Una vez que lo recibe analiza si 
 * es positivo o negativo, y asi activando o desactivando el flag del negativo.
 * Luego divide por 10 el numero que recibio las veces que sean necesarias hasta
 * llegar a 0 y con un contador va sumando el numero total de digitos.
 * Crea un arreglo con la cantidad de digitos que contó y posicionandose en la 
 * ultima posicion del arreglo va agregando el resto del numero que recibio. Y 
 * asi hasta llenar el arreglo.
 * Finalmente con el putchar, los va imprimiendo en pantalla
 ******************************************************************************/
void int2char(int a)
{
    int cant=0, aux, i, negFlag=0;
    if (a<0)                                                                    //detecta si es negativo o no
    {
        a = a*-1;
        negFlag = 1;
    }
    aux = a;                                                                    //guardo el entero que recibi en un auxiliar y comienzo a ver
    while (aux!=0)                                                              //que tan grande es el numero, o sea, la cant de digitos del entero
    {
        aux = aux/10;
        cant++;
    }

    char num[cant];                                                             //creo la lista con la cant que calcule

    for(i=cant-1; i>=0; i--)                                                    //posicionandome en el ultimo elemento del arreglo, voy llenando 
    {                                                                           //el arreglo con el modulo del entero que recibi, luego lo divido
    	num[i] = a%DIEZ + GAP_INT;                                              //por 10 y sigo buscando el resto
    	a = a/DIEZ;
    	
    }

    if (negFlag)                                                                //si el flag esta prendido, agrego un signo negativo al principio
    {
        putchar('-');
        for (i=0; i<cant; i++)
        {
            putchar(num[i]);
        }
    }
    else 
    {
        for (i=0; i<cant; i++)
        {   
            putchar(num[i]);
        }
    }
    
}

/*******************************************************************************
 * La funcion hexa2char, recibe un entero 'a'. Una vez que lo recibe analiza que
 * tan grande es el entero, contando la cantidad de digitos que tiene.
 * Luego crea un arreglo de chars con la cantidad de digitos que calculo. Se 
 * posiciona en la ultima posicion del arreglo y comienza a chequear el modulo 
 * de entero que recibio. 
 * Previamente se creo un arreglo de char constantes con todos los valores del 
 * hexadecimal. Por lo tanto el resultado que devuelve el modulo del entero 
 * coincide con la la posicion del arreglo constante y su valor. Entonces se va
 * guardando los valores que coinciden con la posicion en mi nuevo arreglo.
 ******************************************************************************/
void hexa2char(int a)
{
    const char hexa[] = {"0123456789ABCDEF"};                                   //arreglo de chars constante
    int i, aux, cant=0;
    
    aux = a;
    while (aux!=0)                                                              //verifico la cantidad de digitos
    {
        aux = aux/HEXA;
        cant++;
    }
    
    char hexaChar[cant];                                                        //creo un arreglo de chars
    
    for (i=cant-1; i>=0; i--)                                                   //me posiciono en el ultimo elemento del arreglo
    {
        hexaChar[i] = hexa[a%HEXA];                                             //el valor del resto de a%16 coincide con la posicion del arreglo
        a = a/HEXA;                                                             //de chares constantes. Por lo que busco guardar el valor que coincide
    }                                                                           //el la misma posicion que el char constante.
    
    for(i=0; i<cant; i++)                                                       //pongo en consola el valor hexa en char
    {
        putchar(hexaChar[i]);
    }
}

