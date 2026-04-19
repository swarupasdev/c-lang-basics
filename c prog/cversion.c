#include <stdio.h>

int main(int argc, char** argv) {
   
    #if __STDC_VERSION__ >=  201710L //#if is a pre processor directive
        printf("We are using C18!\n");
    #elif __STDC_VERSION__ >= 201112L
        printf("We are using C11!\n");
    #elif __STDC_VERSION__ >= 199901L
        printf("We are using C99!\n");
    #else
        printf("We are using C89/C90!\n");
    #endif

    
    return 0;
}

//int argc, char** argv
//things to understand __STDC_VERSION__
//#if,elif,else,endif