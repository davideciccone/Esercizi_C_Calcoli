#include<stdio.h>
#include<windows.h>
#include<math.h>

enum COLORS { BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY,
DARKGRAY, LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED,
LIGHTMAGENTA, YELLOW, WHITE } ;

void setcolor(enum COLORS c)
{
CONSOLE_SCREEN_BUFFER_INFO Info ;
GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info) ;
SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), (Info.wAttributes & 0xF0) | c);
}

int main(){
    float at, aq, ac, d, r;

    setcolor(MAGENTA);
    printf("Benvenuto Utente, questo programma e utile per calcolare le Aree di:");

    setcolor(YELLOW);
    printf("\nL'area di un quadrato utilizzando il lato D");
    printf("\nL'area di un cerchio utilizzando di diamentro D");
    printf("\nL'area del triangolo equilatero di Lato D");

    setcolor(DARKGRAY);
    printf("\nInserisci D:\t");
    scanf("%f", &d);

    aq= d*d;
    r= d/2;
    ac= (r*r)*3.14;
    at= (sqrt(3)/4)*(d*d);

    setcolor(LIGHTBLUE);
    printf("L'area del quadrato equivale a: %.2f", aq);
    printf("\nL'area del cerchio equivale a: %.2f", ac);
    printf("\nL'area del triangolo equivale a: %.2f", at);

}