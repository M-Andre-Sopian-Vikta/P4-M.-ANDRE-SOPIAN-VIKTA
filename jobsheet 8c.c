#include <stdio.h>
int main ()
{
int x[6],i;
printf("masukan 1 angka nim terakhir anda\n\n");
for(i=0;i<=4;i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=4;i++)
{
printf("nim ke-%i= %i\n",i+1,x[i]);
}
printf("\n");
return 0;
}


