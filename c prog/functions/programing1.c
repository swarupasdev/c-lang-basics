#include<stdio.h>
int areaofrect();
int main()
{
    int l=10,d=5;
    int area1=areaofrect(l,d);
    printf("Area of a rectangle is = %d\n",area1);

    int l2=15, d2=10;
    int area2=areaofrect(l2,d2);
    printf("area of rectangle is = %d\n",area2);

    int l3=20, d3=15;
    int area3=areaofrect(l3,d3);
    printf("area of rectangle is = %d\n",area3);
}
int areaofrect(int lenght, int breadth   ){
    int area;
    area = lenght*breadth;
    return area;
}