#include <stdio.h>
main (){
printf("Nama : Muh. Fitratul Akbar \n");
printf("NIM : F1B019093 \n");
printf("Kelompok : 19 \n\n");

char nama [2][10][30];
int i, j;
for (i = 0; i< 2; i++){
for (j = 1; j < 10; j++){
printf ("nama my best friend [%d][%d] = ", i, j);
scanf ("%s", &nama[i][j]);
}
}
}
