/***************************************************************************//**
  @file     trigo.h 	// aca iria el nombre del archivo
  @brief    calculo de funciones trigonometricas
  @author   carlos		// el nombre de quien escribio el archivo
 ******************************************************************************/

#ifndef _ALGO2CHAR_H_
#define _ALGO2CHAR_H_

/*******************************************************************************
 * CONSTANT AND MACRO DEFINITIONS USING #DEFINE
 ******************************************************************************/
//constante publica donde se utiliza en todos los archivos
#define GAP_INT 48
#define DIEZ 10
#define HEXA 16

/*******************************************************************************
 * FUNCTION PROTOTYPES WITH GLOBAL SCOPE
 ******************************************************************************/

// aca iria los prototipos de mis funciones
/* los textos que van antes de las funciones, sirven para indicar las descripciones, que 
recibe y que devuelve */

/** 
 * @brief Convierte un entero a char
 * @param Recibe un entero para realizar su conversion
 * @return no devuelve nada
*/
void int2char(int);

/** 
 * @brief Convierte un entero a hexa y luego lo convierte a char
 * @param Recibe un entero para realizar su conversion
 * @return no devuelve nada
*/
void hexa2char(int);


/*******************************************************************************
 ******************************************************************************/

#endif // _ALGO2CHAR_H_
