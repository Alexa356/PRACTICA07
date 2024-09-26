/*
 Programa que recibe dos cadenas y compara si son iguales o no
 @author: Alexa Barron Huerta
 @date: 26/09/2024 
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];

    printf ("Ingresa la primer cadena\n");
    fgets(str1, 100, stdin);

    printf ("Ingresa la segunda cadena\n");
    fgets(str2, 100, stdin);

    if (strcmp(str1, str2)==0){
        printf("Las cadenas son iguales\n");
    }
    else{
        printf("Las cadenas son diferentes\n");
    }
}
