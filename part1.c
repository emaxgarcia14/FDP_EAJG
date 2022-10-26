// Emmanuel Adalberto Juarez Garcia
// ID: 00378822

#include<stdio.h>      // crear un programa que el usuario entre una combinacion de letras a buscar en un texto//
#include<string.h>

int main(){                                                         //aqui se declaran los strings//
    char texto[100], combinaciondeletras[50];
    printf("agregue un texto corto: ");                             //pedimos imprimir un texto //
    fgets(texto,sizeof(texto), stdin);
    printf("agregue una lista de letras o secuencia:\n");           //ingresamos o agregamos una letra que queremos buscar dentro el texto//
    scanf("%s", combinaciondeletras);
    printf("La combinacion es \n");
    puts(combinaciondeletras);
    if (strstr(texto,combinaciondeletras))                          //la combinacion del nos devolveria si seria falso o verdadero//
    puts("Si esta en la combinacion \n");
    else{
        printf("no esta en la combinacion \n");             //como ultimo nos daria si es falso lo que esta en el texo y requrimos y lo imprimos 
    }
    return 0;
}