#include <stdio.h>
int main(){
int i,number,last_digit
,total_sum=0;
number=0;
i = 0;
printf("enter the number");
scanf("%d",&number);	
while(1){
	
i=i+1;//i acts as counter variable for digits
last_digit=number%10;
total_sum=total_sum+last_digit;
//gets added to previous total_sum value
printf("the last digit of your number is %d\n",last_digit);
number = number/10;
if(number>0){
	continue;
}
else{
	break;
	}

}

printf("your number has %d digits\n",i);
printf("the total_sum of digits is %d\n",total_sum);

printf("your number reached 0");
return 0;
	
}

//i did to make like the number will run and the digits are counted by number of times the loop will run
//next i added modulo operator to isolate the last digits which are remainders when divided by 10 lien 10 divided 1516 gives 6 as remainders which gives last digit as 6 each time the loop runs like in first loop it
//next is since i successfully managed to isolate last digits now I'll add them each in new variable called total sum once a loop runs the last digit gets stored in total_sum which was intialy zero and gets added to it for each and every last digit
