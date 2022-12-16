/*Si scriva un programma in linguaggio C che legga due valori interi e visualizzi la loro media
aritmetica.*/
#include<stdio.h>

int main(){
    int num1, num2, media;

    printf("Programma per fare le medie con due cifre");

    printf("\nInserisci il primo numero:\t");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero:\t");
    scanf("%d", &num2);

    media=(num1+num2)/2;

    printf("La media dei numeri corrisponde a: %d", media);
}