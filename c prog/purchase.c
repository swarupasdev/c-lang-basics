//calculate the average value of item
#include<stdio.h>
int main()
{
	double w1,w2,i1,i2,avg;

	printf("Weight of the item1:\n");
	scanf("%f", &w1);
	
	printf("Weight of the item2:\n");
	scanf("%f", &w2);

	printf("No. item1 purchashed:\n");
	scanf("%f",&i1);

	printf("No. item2 purchased:\n");
	scanf("%f",&i2);

	avg=((w1*i1)+(w2*i2))/(i1+i2);
	printf("average value: %f\n",avg);
	
	return(0);	
}