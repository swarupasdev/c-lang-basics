#include<stdio.h>
int main(){
	char name[20];
	int    hour;
	double amount_per_hr;
	double salary;
	

printf("enter employee id:\n");
scanf("%s" , &name);

printf("enter hour of work:\n");
scanf("%d", &hour);

printf("enter the amount per hour:\n");
scanf("%lf", &amount_per_hr);

salary= amount_per_hr*hour; //function has to be before the output
printf("employee id=%s\n Salary= $ %.2lf\n", name, salary);

return(0);
}