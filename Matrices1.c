/*Declaramos las librerias que vamos a utilizar*/
#include <stdio.h>
#include <conio.h>

/*rellenar y mostrar una matriz de 3*3*/
int main()
{
    /*declaramos las variables que utilizaremos para controlar las iteraciones*/
    int Num=0,Fila,Columna;
    /*declaramos la matriz que vamos a usar para trabajar*/
    int Matriz[3][3];
 
    for (Fila=0;Fila<3;Fila++)/*iteramos las filas*/
    {
        for (Columna=0;Columna<3;Columna++)/*iteramos las columnas*/
        {   
            clrscr();/*limpiamos la pantalla*/
            printf ("\n Digite el numero en la posicion %d-%d ==>> ",Fila,Columna);/*mandamos el mensaje*/
            scanf("%d",&Num);/*leemos el valor*/
            Matriz[Fila][Columna]=Num;/*se lo asignamos a la matriz en la posicion en la que se esta iterando*/
        }
    }

    /*mostramos la matriz*/
     for (Fila=0;Fila<3;Fila++)/*filas*/
    {
        for (Columna=0;Columna<3;Columna++)/*columnas*/
        {
            printf(" %d ",Matriz[Fila][Columna]);/*mensaje en pantalla*/
            
        }
        printf("\n");/*salto de linea*/
    }

    getch();/*esperamos una tecla*/
    return 0;
}