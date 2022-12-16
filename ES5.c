/*Sapendo che in un parcheggio la prima ora costa $2 mentre tutte le successive costano $1,
scrivere un programma che richieda il numero complessivi delle ore e visualizzi il totale da pagare.*/

#include<stdio.h>
int main(){
    int ore=1, tot;

    printf("Inserisci ore:\t");
    scanf("%d", &ore);

    tot=ore+1;

    printf("Il totale da pagare corrisponde a: %d", tot);

}