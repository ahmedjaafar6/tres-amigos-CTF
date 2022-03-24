#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define MY_FILE "./destination.txt"

int main(){
    printf("%s", "HIWORLD! gpg...\n");

    char str[1000];
    FILE * f;

    if(access(MY_FILE, F_OK) != 0){
        printf("File doesn't exist!\n");
        return -1;
    }
    if ((f = fopen(MY_FILE, "r")) == NULL) {
        printf("Error! File cannot be opened.\n");
        return -1;
    }
    char check[] = "";
    fscanf(f, "%[^\n]", check);
    if(strcmp(check, "a") == 0){
        printf("%s", "Terminated!");
        fclose(f);
        return -1;
    }
    fclose(f);
    

    printf("%s", "Sleeping for 5 seconds...\n");
    sleep(5);
    printf("%s", "Back awake\n");

    if ((f = fopen(MY_FILE, "r")) == NULL) {
        printf("Error! File cannot be opened.\n");
        return -1;
    }
    
    fscanf(f, "%[^\n]", str);
    if(strcmp(str, "a") != 0){
        printf("%s", "Terminated!\n\n");
        fclose(f);
        return -1;
    }else{
        printf("%s", "CTF_SDaT{Tr!m0_i5_dA_G0@t}\n\n");
        fclose(f);
        return 0;
    }
}