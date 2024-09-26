/*
 Programa que recibe una cadena del usuario y verifica su longitud
 @author: Alexa Barron Huerta
 @date: 26/09/2024 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Ingresa una cadena\n");
    fgets(str, 100, stdin);

    if(-1){
        printf("Cadena de longitud: %d\n", strlen(str));
    }
    return 0;
}
