/*Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro
somma.*/
#include<stdio.h>

int main(){
    int num1, num2, somma;

    printf("Inserisci il primo numero:\t");
    scanf("%d", &num1);
    
    printf("Inserisci il secondo numero:\t");
    scanf("%d", &num2);

    somma= num1+num2;

    printf("%d + %d = %d", num1, num2, somma);
}