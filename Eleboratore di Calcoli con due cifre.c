#include <stdio.h>
#include <stdlib.h>
int main() {
	int num1, num2;
	
	printf("Inserisci il primo numero: \t");
	scanf("%d",& num1);
	
	printf("Inserisci il secondo numero:\t");
	scanf("%d", & num2);
	
	printf("\n %d %s %d %s %d", num1, "+", num2,"=",num1+num2);
	printf("\n %d %s %d %s %d", num1, "-", num2,"=",num1-num2);
	printf("\n %d %s %d %s %d", num1, "x", num2,"=",num1*num2);
	printf("\n %d %s %d %s %d", num1, "/", num2,"=",num1/num2);
	
	return 0;
}