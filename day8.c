#include<stdio.h>

struct Student{
    char name[20] ;
    int age ;
    float score;
};

void addScore(struct Student *p,float bonus){
    p->score+=bonus;
    printf("Name:%s\n",p->name);
    printf("Age:%d\n",p->age);
    printf("Score:%.1f\n",p->score);
}
int main(){
    struct Student student;
    printf("Enter your detail:");
    scanf("%19s %d %f",student.name,&student.age,&student.score);
    addScore(&student,5.0);

    return 0;
}