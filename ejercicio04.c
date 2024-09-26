/*
 Programa que recibe una cadena y dice si esta vacio o no
 @author: Alexa Barron Huerta
 @date: 26/09/2024 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Ingresa una cadena\n");
    fgets(str, 100, stdin);
    // (condicion)? acción_verdadera : acción_falsa
    printf("%s", (strlen(str)==1)? "Cadena vacían": "Cadena no vacía\n");
    
    return 0;
}
