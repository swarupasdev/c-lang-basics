#include<stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    if(a>=0){
        printf("number is possitive");
    }
    else{
        printf("number is negative");
    }
    return 0;
}