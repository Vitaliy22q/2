#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	double dodanok=1,factorial=1, sum=0;
	
	for (i = 1 ;dodanok >= 0.01; i++)
	{
	factorial = factorial*i;	
	dodanok=factorial/pow(i,i);
	sum=sum+dodanok;	
	printf("\n%lf",dodanok);
		
	}
	
printf("\nsum=%lf",sum);
	
	
	
	system("pause");
	return 0;
}
