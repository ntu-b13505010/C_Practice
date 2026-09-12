#include<stdio.h>

int main(){

    int balance = 5000;
    int instr;
    int command;
    int sys=1;
    int ch;
    do{
        printf("Enter your command: ");//1:查詢餘額 2:提款 3:存款 4:離開
        if(scanf("%d", &instr)!=1){
            while((ch = getchar()) != '\n' && ch != EOF){
            }
        
            printf("Invalid choice\n");
            continue;
        }
        switch(instr){
            case 1 : printf("%d\n",balance); break;
            case 2 :{
                printf("輸入提款金額：\n");
                if(scanf("%d", &command)!=1 || command>balance || command <= 0){
                printf("Invalid amount\n");
                continue;
                }
                
                balance=balance-command;
                printf("%d\n", balance);
                
            }break;
            case 3 : {
                printf("存入金額：\n");
                if(scanf("%d", &command)!=1 || command<=0){
                    printf("Invalid amount\n");
                    continue;
                }
                
                balance+=command;
                printf("%d\n", balance);
                
            } break;
            case 4 :{
                printf("Goodbye\n");
                sys = 0;
                break;
            }
            default : printf("Invalid choice\n");

        } 
    }while(sys);
    return 0;
}