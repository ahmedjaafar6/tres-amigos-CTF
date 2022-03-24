#include <stdio.h>
#include <string.h>

int main() {
    printf("%s", "Welcome to the final part. Surprised you made it this far.\n");

    char flag[50];
    printf("%s", "Enter flag:\n");
    scanf("%s", flag);

    if(strcmp(flag, "CTF_SDaT{I_pUt_m1LK_Th3n_(erE@L}") != 0){
        printf("%s", "Wrong flag!\n");
        return -1;
    }

    char buf[] = "Ahmed";

    if(strcmp(buf, "Bingo") == 0){
        printf("%s", "CTF_SDaT{Br1n[3_hA5_@_RAT_und3R_h15_b3d}\n");
        return 0;
    }else{
        printf("%s", "Terminated!\n");
        return -1;
    }

}