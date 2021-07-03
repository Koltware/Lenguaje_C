#include<stdio.h>
#include<conio.h>

int main(){
    /*Declaramos las variables con las que vamos a trabajar*/
    /*una variable bandera y la otra es el numero que se va a validar*/
    int val=0,numero=0;
    while(val==0){/*Empezamos el bulce para volver a pedir el numero*/
        clrscr();/*limpiamos la pantalla*/
        printf("Inserta un numero, y te dire si es par =-)\n=>");/*pedimos el numero, mostrando en mensaje*/
        scanf("%d",&numero);/*leemos el numero*/
        clrscr();/*limpiamos pantalla*/
        if((numero%2)==0){/*hacemos uso del operador modulo para en base al residuo determinar si es par o no*/
            printf("El numero ingresado SI es PAR");/*Mostramos el mensaje*/
            val=1;/*cambiamos el valor de la variable bandera para romper el cliclo*/
        }else{
            printf("El numero ingresado NO es PAR, intentalo de nuevo\n");/*Mostramos un mensaje*/
        }
        getch();/*Esperamos una tecla*/
    }/*llave de cierre del ciclo*/
    return 0;/*terminamos el programa*/
}