#include <stdio.h>
int balance=0;
void checkbalance();
void withdrawmoney();
//subtract reqmoney from current balance 
void depositmoney();
//add reqmoney to current balance 




int main(){
int option;

printf("WELCOME TO WORLD BANK!\n");

while(1){

printf("CHOOSE AN OPTION FROM (1-4)\n");
printf("ENTER 1 FOR WITHDRAW\n");
printf("ENTER 2 FOR DEPOSIT\n");
printf("ENTER 3 TO CHECK BALANCE\n");
printf("ENTER 4 EXIT\n");
scanf("%d",&option);
while(getchar()!='\n');


if(option==1){
withdrawmoney();	
continue;	
}
else if(option==2){
depositmoney();
continue;	

}
else if(option==3){
checkbalance();
continue;	
}
else if(option==4){

printf("THANKS FOR USING OUR BANK\n");
break;	
}
else{
printf("PLS ENTER A VALID OPTION!\n");
continue;		
	
}
}


 


	
	
	
	
	
	
	
	
}
void checkbalance(){
	
printf("Your acc balance is :$%d\n",balance);	
	
	
}
void withdrawmoney(){
int remomoney,option;

printf("ENTER THE MONEY YOU WANT TO WITHDRAW:$");
scanf("%d",&remomoney);

while(getchar()!='\n');
if(remomoney>balance){
printf("YOU ARENT THAT RICH CHECK YOUR BALANCE FIRST!!\n");
	
}

else{
balance-=remomoney;
printf("\nSUCESSFULLY WITHDREW $%d\n",remomoney);
printf("DO YOU WANT TO DISPLAY YOUR BALANCE?\n"); 
printf("IF YES PRESS 1\n"); 
scanf("%d",&option);
if(option==1){
	
checkbalance();	
}

}	
	
}

void depositmoney(){
int addmoney,option;
printf("ENTER THE MONEY YOU WANT TO DEPOSIT:$");
scanf("%d",&addmoney);
printf("\nSUCESSFULLY DEPOSITED $%d ",addmoney);
while(getchar()!='\n');
balance+=addmoney;
printf("DO YOU WANT TO DISPLAY YOUR BALANCE?\n"); 
printf("\nIF YES PRESS 1\n"); 
scanf("%d",&option);
if(option==1){
	
checkbalance();	

	
	
	
	
	
	
	
}	
}	
	
