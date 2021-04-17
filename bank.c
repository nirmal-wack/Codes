#include<stdio.h>
#include<string.h>
 
struct bank
{
    int account_no;
    char name[20];
    char bank_name[100];
    float current_bal;

    //function register()
    //function deposit()
    //function withdraw()
    //function checkbalance()

};
int withdraw(int c){
    int deduct,total;
    printf("Account Balance : %d",c);
    printf("Enter How Much Money do you want to withdraw :" );
    scanf("%d",&deduct);
    total=c-deduct;
    c=total;
    return c;
}
int deposit(int c){
    int incr,total;
    printf("Account Balance : %d",c);
    printf("Enter How Much Money do you want to deposit :" );
    scanf("%d",&incr);
    total=c+incr;
    c=total;
    return c;
}


int main(){
    char k[10];
    int c;
    struct bank customer[4][12];
    printf("Enter Your Bank Name:");
    scanf("%s",customer[0][0].bank_name);
    printf("Enter Your account_number :");
    scanf("%d",&customer[0][1].account_no);
    customer[0][2].current_bal=12,00,000;
    c=customer[0][2].current_bal;
    printf("Deposit/Withdraw/checkbalance:");
    scanf("%s",k);
    if(k[0]=='w' || k[0]=='w'){
        withdraw(c);
       
        customer[0][2].current_bal=c;
        printf("%f",customer[0][2].current_bal);
    }
    else if(k[0]=='d' || k[0]=='D'){
        withdraw(c);
        
        customer[0][2].current_bal=c;
    }
    else if((k[0]=='c' || k[0]=='c')){
        printf("%f",customer[0][2].current_bal);

    }
    
    

    /*
    1. Keval opens account at ICICI
    2. Nirmal opens account at Axis
    3. Keval deposits 100
    4. Keval checks balance
    5. Nirmal deports 500
    6. Nirmal withdraws 100
    7. Nirmal checks account





    */
}