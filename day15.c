#include<stdio.h>
#include<stdlib.h>
void allocateArray(int **pp, int size){
    if (*pp == NULL){
        *pp=malloc(size*sizeof(int));
    }
}

int main(){

    int*number=NULL;
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    allocateArray(&number,size);
    if (number==NULL){
        return 1;
    }
    printf("Enter number :");
    for(int i=0; i<size;i++){
        scanf("%d",number+i);  
    }
    for(int i=0; i<size;i++){
        printf("%d\n",*(number+i));  
    }
    free(number);
    return 0;

}