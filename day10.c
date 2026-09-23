#include<stdio.h>

struct Student{
    char name[20];
    int age;
    float score;
};

int main(){
    struct Student s[3];
    printf("Enter your detail:");
    //scanf("%s %d %f", s.name,&s.age,&s.score);
    for(int i=0;i<3;i++){
    scanf("%19s %d %f",
          s[i].name,
          &s[i].age,
          &s[i].score);
}

    FILE *fp;
    fp=fopen("Student.txt","w");
    for(int i=0;i<3;i++){
        fprintf(fp,"%s %d %.2f\n",s[i].name,s[i].age,s[i].score);
    }
    fclose(fp);

    fp=fopen("Student.txt","r");
    for(int i=0;i<3;i++){
        fscanf(fp,"%s %d %f\n",s[i].name,&s[i].age,&s[i].score);
    }
    fclose(fp);
    for(int i=0;i<3;i++){
    printf("%s %d %.2f\n",
           s[i].name,
           s[i].age,
           s[i].score);
}
    
    
    return 0;
}