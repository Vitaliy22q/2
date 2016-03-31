#include <stdio.h>
#include <stdlib.h>



int main ()
{ 
   
    int n, i = 0;
    printf("Vvedite naturalnoe chislo\n");
    scanf ("%d",&n);
   
    while (n!= 0) {
         n = n / 10;
         i++;
}
printf("Vashe chislo imeet %d znakow.\n",i);

system ("pause");

	return 0;
}



