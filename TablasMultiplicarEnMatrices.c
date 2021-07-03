#include <stdio.h>
#include <conio.h>

/*Monstraremos las tablas de multiplicar en forma de tabla siendo la tabla maxima la que el usuario indique*/
int main()
{
   int matriz[100][100];/*reservamos una matriz con la que vamos a trabajar*/
   int i=0,j=0,a=0,tabla=0;/*variables para controlar las iteraciones y la tabla con la que se va a trabajar*/
   clrscr();/*limpiamos la pantalla*/

    printf("Inserta hasta que tabla quieres ver: \n->");
    scanf("%d",&tabla);/*leemos la tabla de multiplicar*/
    printf("\t--------Tablas de Multiplicar--------\n");
    for(i=0;i<tabla+1;i++){
        textcolor(RED);/*cambiamos el color del texto de la fila*/
        cprintf(" %03d ",i);/*le damos formato al texto*/
            if(a==0){
                for(j=0;j<tabla+1;j++){
                    textcolor(BLUE);
                    cprintf(" %03d ",j);
                }
                a=1;
                }else{
                for(j=0;j<tabla+1;j++){
                matriz[i][j]=i*j;
                printf(" %03d ",matriz[i][j]);
            }

        }
        printf("\n");
    }
    getch();/*esperamos una tecla para terminar el programa*/
    return 0;
}