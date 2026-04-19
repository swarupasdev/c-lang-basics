//distance between 2 points.
// use of sqrt() inbuilt function.
//math.h use
#include<stdio.h>
#include<math.h>
int main(){
float x1,x2,y1,y2,result;
printf("value of x1:\n");
scanf("%f",&x1);
printf("value of y1:\n");
scanf("%f",&y1);
printf("value of x2:\n");
scanf("%f",&x2);
printf("value of y2:\n");
scanf("%f",&y2);

result=(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
printf("Distance between two points are:%.3f\n",sqrt(result));
return(0);
}