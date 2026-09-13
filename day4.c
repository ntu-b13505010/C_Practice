#include<stdio.h>

void showBalance(int balance);

int withdraw(int balance, int command);

int deposit(int balance, int command);

int main(){
    int balance = 5000;
    int amount;
    int command ;
    int ch ;
    int sys=1 ;
    do{
        printf("Enter your command : ");
        if (scanf("%d",&command)!=1){
            while((ch=getchar())!='\n' && ch!=EOF){
            }
            printf("invaild choice\n");
            continue;
        }
        switch(command){
            case 1:showBalance(balance);break;

            case 2:{
                printf("輸入提款金額：");
                if(scanf("%d", &amount)!=1 || amount>balance || amount<= 0){
                    while((ch=getchar())!='\n' && ch!=EOF){
                    }
                    printf("Invalid amount\n");
                    continue;
                }
                balance=withdraw(balance, amount);
                
            }break;

            case 3:{
                printf("存入金額：\n");
                if(scanf("%d", &amount)!=1 || amount<=0){
                    while((ch=getchar())!='\n' && ch!=EOF){
                    }
                    printf("Invalid amount\n");
                    continue;
                }
                balance=deposit(balance,amount);
            }break;

            case 4:printf("Goodbye\n");sys=0;break;

            default:printf("invalid choice\n");continue;
        }
    }while(sys);
    return 0;
}
void showBalance(int balance){
    printf("%d\n",balance);
}
int withdraw(int balance, int command){
    balance=balance-command;
    printf("%d\n", balance);
    return balance;
}
int deposit(int balance, int command){

    balance+=command;
    printf("%d\n", balance);
    return balance;
}