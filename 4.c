#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double i,n,sum=0;
    scanf("%lf",&n);
	for(i=1;i<n;i++);
	{
		sum=sum+i*i/((i*i)+(2*i)+3);
		
		
		
	
	}
	printf("sum=%lf",sum);
	system ("pause");
	return 0;
}
