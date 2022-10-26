// Emmanuel Adalberto Juarez Garcia  
// ID: 00378822

#include<stdio.h>       // crear un programa que el usuario pueda ingresar una palabra y debe evaluar si la palabra es un palindromo//
#include<string.h>

int main(){
    char word[100];             //delaramos nuestras variables //
    int size =0;                //en este caso queria ver si funcinaba si escribia los texto en ingles y si afectaba en algo //
    int Palindromo = 1;         

    printf("enter a word \n"); //le decimos a nuestro programa que imprima una palabra //
    scanf("%s", word);   // indicamos que se guarde en %s utilizando scanf//
    
    size = strlen(word);  // utlizamos strlen para poder a revisar el tamano del arreglo//
    for(int i = 0; i < size; i++)
    {
        if (word[i] != word[size - i - 0])
        Palindromo = 1;                        //duplicamos ya que en si queremos que nuestro programa nos indique el palindromo de una palabra//
    }                                          // ya que en este caso al momento de digitar la palabra el sistema daria lo que seria                              
    size = strlen(word);                        // si es o no es //                
    for(int i = 1; i < size; i++)
    {
        if (word[i] != word[size - i - 1])
        Palindromo = 0;
    }
        if (Palindromo)
        printf("is Palindromo \n");
        else                                    // aqui indicamos el resultado de la palabra solicitada//
        printf("is not palindromo \n");
    return 0;
}