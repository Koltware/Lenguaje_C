#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main ()
{   /*declaramos las variables con la que vamos a trabajar*/
	char valida_numero;/*guarda el numero ingresado como texto*/
	int num=0;/*aqui se almacena el numero ya convertido en entero*/
    system("cls");/*limpiamos pantalla*/
	printf("digite un n%cmero entero: ",163);/*pedimos el numero*/
	scanf("%c",&valida_numero);/*escaneamos el valor ingresado desde el teclado*/
	
    /*nos auxiliamos de la tabla ascii para validar la posicion del caracter ingresado y asi determinar si*/
    /*es un numero o no lo es*/
	if (valida_numero < 48 || valida_numero > 57)
	{
		printf("\n ERROR!, solo se aceptan n%cmero enteros.\n ",163);

	}else
	{
     	printf("\n El n%cmero  ingresado es:%c \n ",163,valida_numero);
     	/*lo convertimos a entero con lo que se llama un casting y le retornamos su posicion en ascii*/
        /*le estamos el equivalente a posicion en cero que es 48 para obtener el valor*/
        /*y asignarlo a la variable*/
     	num=((int)valida_numero-48);
        /*mostramos el patalla el numero mas 5 unidades para comprobar que es un entero y podemos tratrarlo como tal*/
        printf("El numero ingresado mas 5 unidades es : %d",(num+5));

	}
    getch();/*esperamos una tecla para finalizar el programa*/
    return 0;
}