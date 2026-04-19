#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> //use of library

int main() 
{
    char ch;
    char s[24];
    char t[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    scanf("%[^\n]%*c", t); 

    //scans everything untill a \n
    //(*) asterisk

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", t);
     
    return 0;
}