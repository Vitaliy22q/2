#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, n;
	double nod1, nod2, nod;
	m>=n;
	printf("\nVvedite n:");
	scanf("%d", &n);
	printf("\nVvedite m:");
	scanf("%d", &m);
	
	for ( nod1=n;nod2=m;nod1!=0 ){
		nod = nod2 % nod1;
		nod2=nod1;
		nod1=nod;
	}
	printf("NOD = %d", nod2);
	
	return 0;
}
