#include<stdio.h>
int main()
{
int x,y,z;

printf("enter 1st digit:\n");
scanf("%d", &x);

printf("enter 2nd digit:\n");
scanf("%d", &y);

printf("enter 3rd digit:\n");
scanf("%d", &z);

if (x>y && x>z)
{
printf("%d is the maximum of three\n",x);
}
else if (y>x && y>z)
{
printf("%d is the maximum of three\n",y);
}
else
{
printf("%d is the maximum of three\n",z);
}
return(0);
}