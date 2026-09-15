#include<stdio.h>
#include<string.h>

int main() {
    char account[6] ;
    char password[9];
    printf("Enter your account and password : ");
    scanf("%5s %8s",account, password);
    if (strcmp(account,"admin")==0 &&strcmp(password,"apple123")==0 )
        printf("Login successful");
    else printf("Login Failed");

    return 0;

}