#include<stdio.h>
#include<math.h>
int main() 
{
    int n, x; //imput
    float km; //output
    
    printf("Inserisci n (Km percorsi): ");
    scanf("%d", &n);
    printf("Inserisci x (Litri di benzina): ");
    scanf("%d", &x);
    km= (n*1/x); //Proporzione di risoluzione (x:n=1:km) 
    printf("I Km percorsi con 1 litro di benzina sono: %f",km); //Risultato finale
    return 0;
    
}
