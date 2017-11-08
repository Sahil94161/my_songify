#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
fp=fopen("myfile.txt","w");
fprintf(fp,"I love my india");
fclose(fp);


}