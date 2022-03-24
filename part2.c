#include <stdio.h>
#include <string.h>

int main() {
    printf("%s", "Welcome to part 2. Do you dare keep going?\n");

    char buf[12];
    int foo;

    char flag[50];
    printf("%s", "Enter flag:\n");
    scanf("%s", flag);

    if(strcmp(flag, "CTF_SDaT{Tr!m0_i5_dA_G0@t}") != 0){
        printf("%s", "Wrong flag!\n");
        return -1;
    }

    char input[50];
    scanf("%s", input);
    strcpy(buf, input);

    if(foo){
        printf("%s", "CTF_SDaT{I_pUt_m1LK_Th3n_(erE@L}\n\n");
        return 0;
    }else{
        printf("Terminated!\n\n");
        return -1;
    } 
}