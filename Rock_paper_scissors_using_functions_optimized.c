#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Computerinput();
int Userinput();
void checkwinner(int robo,int comp);





int main(){
	
int choiceofrobo;
int choiceofuser;
choiceofuser=Userinput();	
choiceofrobo=Computerinput();
checkwinner(choiceofrobo,choiceofuser);
	



	
	
	
}


int Userinput(){
int choice;
printf("enter your input(1-3)\n");

scanf("%d",&choice);

if(choice==1){
printf("YOU CHOSE ROCK\n ");	
	
}
else if(choice==2){
printf("YOU CHOSE PAPER\n ");	
}
else if(choice==3){
printf("YOU CHOSE SCISSORS\n");	
}
else{
printf("CHOOSE A VALID CHOICE ");	
}

return choice;
	
	
	
}
int Computerinput(){
int computerchoice;
int max=3;
int min=1;
	
srand(time(NULL));

	
computerchoice=(rand()%(max-min+1))+min;
if(computerchoice==1){
printf("COMPUTER CHOSE ROCK \n");	
	
}
else if(computerchoice==2){
printf("COMPUTER CHOSE PAPER \n ");	
}
else if(computerchoice==3){
printf("\nCOMPUTER CHOSE SCISSORS\n");	
}
else{
printf("CHOOSE A VALID CHOICE \n");	
}


return computerchoice;	

	
	
	
}
void checkwinner(int comp,int user){
if(user==comp){
printf("BOTH CHOSE SAME ITS A TIE!\n");
	
	
}
//comp winning 
else if((user==1 && comp==2)
|| (user==2 && comp==3) || (user==3 && comp==1) ){
	
printf("\nCOMPUTER WON :SEDLIFE!!:");	
}
else{
//user wins
printf("\nUSER  WON :HAPPYLIFE!!:");

	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
