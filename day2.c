#include<stdio.h>

int main(){
    int age;
    int ifstu;
    printf("Enter your age and are you a student(Yes/No-1/0): ");
    scanf("%d %d", &age , &ifstu);

    if(age<0){
        printf("WTF\n");
        return 0;
    }

    if(ifstu!=1 && ifstu!=0){
        printf("WTF\n");
        return 0;
    }
    if(age<6) printf("free\n");
    else if (age<=12) printf("100 dollar\n");
    else if (age<=17) printf("150 dollar\n");
    else {
        if(ifstu==1)printf("180 dollar\n");
        else printf("250 dollar\n");
    }

    //printf("%d", age);
    return 0;

}