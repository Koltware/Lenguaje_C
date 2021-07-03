/*Importamos las librerias que vamos autilizar*/
#include<conio.h>
#include<dos.h>

int main(){
	int i;/*Declaramos la unica variable que vamos autilizar*/
    /*para trabajar con sonido en c, debemos de tener en cuenta la frecuencia y el tiempo de duracion*/
    /*a partir de eso podremos componer sonidos mas trabajados*/

    /*Aqui muestra algunos sonidos generados, pero se pueden realizar cosas mucho mejores*/
   for (i=0;i <= 1000;i++)
   {
      sound(i);/*Esta funcion proyecta el sonido , tomando (en este caso) la variable del for como frecuencia*/
      delay(25);/*hace una pausa expresada en mili-segundos 1000 milisegundos=1segundo*/
   }
   delay(1000);/*hace una pausa de 1 segundo*/
   nosound();/*Esta funcion detiene el sonido*/
   delay(1000);/*Hace una pausa de 1 segundo*/
   /*----------------------------------------------------------------------------------------------------------*/
   for(i=10;i>0;i--){
        sound(i*400);
        delay(63);
        nosound();
	}
	delay(1000);
    for(i=30;i>0;i--){
        sound(i*50);
        delay(130);
        nosound();
	}
    delay(1000);
    for(i=30;i>1;i--){
        if(i%2){
            sound(i*24);
            delay(360);
            nosound();
        }else{
            sound(i*15);
            delay(130);
            nosound();
        }
        
	}
    delay(1000);
    for(i=30;i>1;i--){
        if(i%2){
            sound(i*24);
            delay(360);
            nosound();
        }else if((i+3)%2){
            sound(i+1*15);
            delay(50);
            nosound();
        }else{
            sound(i+2*15);
            delay(250);
            nosound();
        }
        
	}
    delay(1000);
}