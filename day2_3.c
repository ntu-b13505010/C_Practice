#include<stdio.h>
int main(){
    int balance = 5000;
    int instr;
    int command;
    printf("Enter your command: ");//1:查詢餘額 2:提款 3:存款 4:離開
    if(scanf("%d", &instr)!=1){
        printf("Invalid choice\n");
        return 0;
    }
    switch(instr){
        case 1 : printf("%d\n",balance); break;
        case 2 :{
            printf("輸入提款金額：\n");
            if(scanf("%d", &command)!=1 || command>balance || command <= 0){
                printf("Invalid amount\n");
                return 0;
            }
            else{
                balance=balance-command;
                printf("%d\n", balance);
            }
        }break;
        case 3 : {
            printf("存入金額：\n");
            if(scanf("%d", &command)!=1 || command<=0){
                printf("Invalid amount\n");
                return 0;
            }
            else {
                balance+=command;
                printf("%d\n", balance);
            }
        } break;
        case 4 : printf("Goodbye\n");break;
        default : printf("Invalid choice\n");

    } 
    return 0;
}  