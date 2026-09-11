#include<stdio.h>

int main(){
    int password;
    int code;
    printf("Enter the password and code :");
    if(scanf("%d %d", &password,&code)!=2){
        printf("WTF\n");
        return 0;
    }
    if (password<0 || code<0){
        printf("Invalid input\n");
        return 0;
    }
    if (password==1234 && code==5678) printf("Login success\n");
    else if (password!=1234) printf("Wrong password\n");
    else printf("Wrong code\n");

    return 0;
}