#include<stdio.h>

struct Student{
    char name[20];
    int age;
    float score;
};
void addScore(struct Student p[],int bonus){
    for(int i=0;i<3;i++){
        (p+i)->score+=bonus;
    }
}
int main(){
    struct Student student[3];
    printf("Enter your detail:");
    for (int i = 0 ; i < 3 ; i++){
        scanf("%19s %d %f",
                student[i].name,
                &student[i].age,
                &student[i].score);
    }
    addScore(student,5);
    for (int i = 0 ; i < 3 ; i++){
        printf("%19s %d %.2f\n",
                student[i].name,
                student[i].age,
                student[i].score);
    }

    return 0;

}