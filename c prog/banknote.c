#include<stdio.h>
int main()
{
int var,tot;
printf("Input the amount:");
scanf("%d",&var);

tot=var/100;
printf("there are %d of 100.00\n",tot);
var=var-(tot*100);

tot=var/50;
printf("there are %d of 50.00\n",tot);
var=var-(tot*50);

tot=var/20;
printf("there are %d of 20.00\n",tot);
var=var-(tot*20);

tot=var/10;
printf("there are %d of 10.00\n",tot);
var=var-(tot*10);

tot=var/5;
printf("there are %d of 05.00\n",tot);
var=var-(tot*5);

tot=var/2;
printf("there are %d of 02.00\n",tot);
var=var-(tot*2);

tot=var/1;
printf("there are %d of 01.00\n",tot);
var=var-(tot*1);

return 0;
}