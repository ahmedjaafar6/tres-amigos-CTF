#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char str[50];
    bool flag = false;
    while(flag == false){
        printf("%s", "Enter password (Use all caps):\n");
        scanf("%s", str);
        if(strlen(str) > 50){
            printf("%s", "You entered a password over 50 characters. Too long!\n");
        }
        if(strcmp(str, "DRWILHO") == 0){
            printf("%s%s%s", "Correct, the password is: ", str, "\n");
            flag = true;
        }else{
            printf("%s", "Wrong!\n");
        }
    }
    return 0;
}