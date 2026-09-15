#include<stdio.h>
#include<string.h>

int main(){
    char firstname[20];
    char lastname[20];
    printf("Enter your name :");
    scanf("%19s",firstname);
    scanf("%19s",lastname);
    int firstLength=strlen(firstname);
    int lastLength=strlen(lastname);
    char fullname[50];
    strcpy(fullname,firstname);
    strcat(fullname," ");
    strcat(fullname,lastname);
    printf("Fullname is %s\n",fullname);
    printf("First name length : %d",firstLength);

    return 0;
}