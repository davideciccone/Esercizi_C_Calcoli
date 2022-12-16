#include <stdio.h>
#include <math.h> //Libreria Mateamtica//

int main()
{ 
    int c1, c2; //input
    float A, p, i; //output
    printf("Inserisci c1: ");
    scanf("%d", &c1);
    printf("Inserisci c2: ");
    scanf("%d", &c2);
    i= sqrt(c1*c1+c2*c2);
    A= (c2*c1/2);
    p= (c1+c2+i);
    printf("L'ipotenusa vale: %f \n", i); //Risultato Ipotenusa
    printf("L'area vale: %f \n", A); //Risultato Area
    printf("Il perimetro vale: %f",  p); //Risultato Perimetro
    return 0;
    
}