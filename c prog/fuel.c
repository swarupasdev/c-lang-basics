//Calculate average consumption from the given total distance and fuel spent
#include<stdio.h>
int main(){
int td;
float fk,avg;
printf("Total distance covered(km):\n");
scanf("%d",&td);

printf("Fuel total distance(ltr):\n");
scanf("%f",&fk);

avg=td/fk;
printf("Total fuel consumed:%.3f \n",avg);


return(0);
}