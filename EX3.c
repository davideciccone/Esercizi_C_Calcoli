/*Si scriva un programma in linguaggio C capace di compiere le 4 operazioni (somma, sottrazione, moltiplicazione e divisione) tra due numeri reali inseriti da tastiera. Dopo che sono
stati inseriti i due numeri, detti A e B, il programma dovrà visualizzare i quattro valori
A+B, A-B, A*B, A/B. Si ipotizzi che sia B6=0 */
#include <stdio.h>
#include <windows.h>

enum COLORS
{
    BLACK,
    BLUE,
    GREEN,
    CYAN,
    RED,
    MAGENTA,
    BROWN,
    LIGHTGRAY,
    DARKGRAY,
    LIGHTBLUE,
    LIGHTGREEN,
    LIGHTCYAN,
    LIGHTRED,
    LIGHTMAGENTA,
    YELLOW,
    WHITE
};

void setcolor(enum COLORS c)
{
    CONSOLE_SCREEN_BUFFER_INFO Info;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (Info.wAttributes & 0xF0) | c);
}

int main()
{
    int n1, n2;
    float somma, differenza, moltiplicazione, divisione;

    setcolor(YELLOW);
    printf("Calcolatrice a due numeri");

    setcolor(WHITE);
    printf("\nInserisci primo numero: ");
    scanf("%d", &n1);

    /*printf("Inserisci un segno di calcolo: + - * / :\t");
    scanf("%d", &segno);*/

    setcolor(WHITE);
    printf("Insersci secondo numero: ");
    scanf("%d", &n2);

    /*if(segno=! "+" && segno=! "-" && segno=! "*" && segno=! "/" ){
        printf("Bastardo non hai inserito un segno corretto");
    }*/

    somma = n1 + n2;
    differenza = n1 - n2;
    moltiplicazione = n1 * n2;
    divisione = n1 / n2;

    setcolor(LIGHTCYAN);
    printf("\n %d + %d = %f", n1, n2, somma);
    printf("\n %d - %d = %f", n1, n2, differenza);
    printf("\n %d x %d = %f", n1, n2, moltiplicazione);
    printf("\n %d / %d = %f", n1, n2, divisione);

    return 0;
}