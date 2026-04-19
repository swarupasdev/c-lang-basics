//days to years weeks and days

#include<stdio.h>
int main(){
int tot_day,days,years,weeks;

tot_day=1329;

years=tot_day/365;
weeks=(tot_day%365)/7;
days=(tot_day%365)%7;

printf("Years= %d\n",years);
printf("Weeks= %d\n",weeks);
printf("Days= %d\n",days);

return(0);
}