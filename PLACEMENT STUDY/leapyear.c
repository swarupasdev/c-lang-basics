#include <stdio.h>

int isLY(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1; //lp
    else
        return 0; //nlp
}

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLY(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}