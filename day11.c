#include<stdio.h>

int main(){
    char word[] = "HELLO";
    char *p = word ;
    while (*p!='\0'){
        printf("%c\n", *p);
        p++;
    }
    return 0;
}