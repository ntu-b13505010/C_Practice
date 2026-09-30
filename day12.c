#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *number;
    printf("Enter size :");
    scanf("%d", &n);
    number = malloc(n*sizeof(int));
    if (number == NULL)return 1;
    printf("Enter the number :");
    for(int i = 0; i<n;i++){
        scanf("%d",number+i);
    }
    for(int i = 0; i<n;i++){
        printf("%d\n",*(number+i));
    }
    free(number);
    return 0;
}