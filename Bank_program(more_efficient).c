#include<stdio.h>
//bank program bro code way
float checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    printf("**WELCOME TO OUR BANK PROGRAM**\n");
    float balance=0.0f;
    int options;

    printf("\nCHOOSE FROM THE FOLLOWING OPTIONS\n");
    printf("\nCHOOSE OPTIONS FROM 1-4\n");
    printf("1 FOR CHECK BALANCE\n");
    printf("2 FOR DEPOSIT AMOUNT\n");
    printf("3 FOR WITHDRAWAL  AMOUNT\n");
    printf("4 FOR EXIT BANK\n");
    
    do{
        printf("\nCHOOSE YOUR  OPTION\n");

        int scan_result;
        scan_result=scanf("%d",&options);
        while(getchar()!='\n');
        
        // when user enters scanf computer reads it as 1 or 0 not the input we gave if we enter valid it reads as 1 else it reads as 0 so i used this if statement 
        if(scan_result!=1){
            options=0;
            printf("INVALID INPUT\n");
            continue;	
        }
        else
        
        switch(options){
            case 1:
                balance=checkbalance(balance);
                break;	
            case 2:
                balance+=deposit();
                break;
            case 3:
                balance-=withdraw(balance);
                break;
            case 4:
                printf("THANKS FOR CHOOSING OUR BANK \n");
                break;
            default:
                printf("invalid choice\n");
                break;	
        }

    }while(options!=4);
}

float checkbalance(float balance){
    printf("YOUR ACC BALANCE IS $%.2f\n",balance);	
    return balance;
}

float deposit(){
    float amount;
    printf("PLS ENTER THE AMOUNT YOU WANT TO DEPOSITED  $");

    if((scanf("%f",&amount))!=1){
        /* 
           BUFFER EXPLANATION: Think of getchar() as a black hole sucking characters out of the input queue.
           WITHOUT a semicolon: The black hole pulls a character -> instantly triggers the printf alarm -> loops and repeats. 
           For a 5-letter word, you get 5 printfs!
           WITH a semicolon (below): We put a soundproof shield over the loop. It silently sucks out all bad characters one by one 
           until it hits '\n'. Once the buffer is fully cleaned and the loop stops, it hits the printf exactly ONCE.
        */
        while(getchar()!='\n'); // Semicolon added here to shield the loop!
        printf("INVALID INPUT\n");
        return 0.0;	
    }
    
    if(amount<0){
        printf("\n INVALID AMOUNT $%.2f\n",amount);
        return 0.0;	
    }else{
        printf("SUCESSFULLY DEPOSITED  $%.2f\n",amount);
        return amount;
    }	
}

float withdraw(float balance){
    float amount;
    printf("PLS ENTER THE AMOUNT YOU WANT TO WITHDRAW  $");

    if((scanf("%f",&amount))!=1){
        while(getchar()!='\n');
        printf("INVALID INPUT\n");
        return 0.0;	
    }
    
    if(amount<0){
        printf("INVALID AMOUNT $%.2f\n",amount);
        return 0.0;	
    }
    else if(amount>balance){
        printf("INSUFFICIENT BALANCE $%.2f\n",balance);	
        return 0.0;	
    }
    else{
        printf("SUCESSFULLY WITHDRAWN $%.2f\n",amount);
        return amount;
    }	
}
