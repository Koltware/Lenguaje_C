#include<stdio.h>
#include<conio.h>

int main(){
    /*Que rellene un array de dos dimensiones con números pares, 
    lo muestre y después que pida una posición X,Y y mostrar el número correspondiente.*/

    /*delcaramos las variables que vamos a ocupar*/
    int matris[100][100];
    int filas=0,columnas=0,contador=2,val=0,i=0,j=0;

    clrscr();/*limpiamos la pantalla*/

    printf("dijite el numero de filas y columnas separadas por como Ejemplo 2,3\n: ");
    scanf("%d,%d",&filas,&columnas);/*leemos de forma directa los valores de las filas y columnas*/
    clrscr();/*limpiamos la pantalla*/

    printf("su matris sera de [%d][%d] oprima cualquier tecla para continuar\n",filas,columnas);
    getch();/*esperamos una tecla*/

    for(i=0;i<filas;i++){/*filas*/

        for(j=0;j<columnas;j++){
            /*columnas*/
            while(val==0){/*realizamos una validacion si es un numero par*/
                clrscr();
                printf("Inserta el numero par en la coordenada %d,%d\n",i,j);
                scanf("%d",&contador);
                if(contador%2==0){
                    val=1;/*cambiamos el valor para salir del bucle*/
                }else{
                    clrscr();
                    printf("El numero debe de ser par");getch();
                }
            }
            matris[i][j]=contador;/*asignamos el valor a la matriz*/

        }/*columnas*/
        val=0;/*reiniciamos nuestra variable bandera*/
    }/*filas*/

    /*-----------------------------mostrando los datos-----------------------------*/
    inicio:/*etiqueta */
    clrscr();/*limpiamos la pantalla*/

    for(i=0;i<filas;i++){/*filas*/
        for(j=0;j<columnas;j++){/*columnas*/
            printf(" %02d ",matris[i][j]);/*el %02d da un formato al mostar los valores*/
        }
        printf("\n");/*salto de linea*/
    }/*filas*/

    /*solicitamos la coordenada de quieres*/
    printf("\n");
    printf("inserte la cordenada que quieres ver x-y \n");
    printf("fila->");scanf("%d",&filas);
    printf("\nColumna->");scanf("%d",&columnas);
    fflush(stdin);
    printf("\n\n%d",matris[filas][columnas]);

    /*esperamos una tecla y regresamos a la etiqueta del inicio*/
    getch();goto inicio;
    
    return 0;
}