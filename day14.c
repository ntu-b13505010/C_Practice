#include<stdio.h>
typedef enum{
    FRESHMAN,
    SOPHOMORE,
    JUNIOR,
    SENIOR,
}Grade;

typedef struct{
    char name[20];
    int age;
    Grade grade;
}Student;
int main(){
    Student s ;
    int grade;
    printf("Enter your name :");
    scanf("%19s",s.name);
    printf("Enter your age :");
    scanf("%d",&s.age);
    printf("Enter your grade :");
    scanf("%d",&grade);
    s.grade = grade ;
    printf("%s %d %d",s.name,s.age,s.grade);

    return 0;


}