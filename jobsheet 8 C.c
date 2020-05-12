#include<stdio.h>
int main()
{
printf("Nama : Muh. Fitratul Akbar \n");
printf("NIM : F1B019093 \n");
printf("Kelompok : 19 \n\n");
int x[3],i;
for (i=0; i<=4; i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for (i=0; i<=4; i++)
{
printf("Nilai ke-%i = %i \n",i+1,x[i]);
}
printf("\n");
return 0;
}

