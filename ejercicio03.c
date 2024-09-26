/*
 Programa que recibe duna cadena e indica si comienza con una vocal
 @author: Alexa Barron Huerta
 @date: 26/09/2024 
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf ("Ingresa la primer cadena\n");
    fgets(str, 100, stdin);
    switch (str[0])
    {
        case 'a': case 'A' :
            printf("La cadena comienza con a\n");
            break;
        case 'e': case 'E' :
            printf("La cadena comienza con e\n");
            break;
        case 'i' : case 'I' :
            printf("La cadena comienza con i\n");
            break;
        case 'u' : case 'U' :
            printf("La cadena comienza con u\n");
            break;
            case 'o' : case 'O' :
            printf("La cadena comienza con o\n");
            break;
                default:
                break;
    }
    return 0;
}
