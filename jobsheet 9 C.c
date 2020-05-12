#include<stdio.h>
int main()
{
printf("Nama : Muh. Fitratul Akbar \n");
printf("NIM : F1B019093 \n");
printf("Kelompok : 19 \n\n");
		
int i;
char nama[30]={'M','u','h','.',' ','F','i','t','r','a','t','u','l',' ','A','k','b','a','r'};
char nama2[30]="Muh. Fitratul Akbar";
printf("Array per karakter = ");
		
for (i=0; i<=29; i++)
{
printf("%c",nama[i]);
}
printf("\n");
printf("Array string = %s \n\n", nama2);
return 0;
}

