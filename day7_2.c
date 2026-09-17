#include<stdio.h>

void doubleArray(int *number, int size){
    for (int i=0;i<size;i++){
        *(number+i)*=2;
    }
}
int main(){
    int num[5];
    printf("Enter 5 number :");
    for(int i=0;i<5;i++){
        scanf("%d",(num+i));
    }
    doubleArray(num,5);
        for(int i=0;i<5;i++){
        printf("%d ",*(num+i));
    }
    return 0;
}