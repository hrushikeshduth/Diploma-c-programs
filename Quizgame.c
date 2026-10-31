//quiz game
#include<stdio.h>

int main(){
char questions[][100]={"what is the largest planet in our solar system?",
"which planet has radiation belts so high that it accelerates ions?",
"what is the furthest planet from sun in our solar system?"};
char options[][100]={"A.JUPITER B.SATURN C.URANUS D.MERCURY","A.MERCURY B.NEPTUNE C.URANUS D.JUPITER","A.MERCURY B.PLUTO C.NEPTUNE D.URANUS"};
char answerkey[]={'A','D','C'};
char Aoptions='\0';
printf("**WELCOME TO THE QUIZ GAME OF ASTRONOMY 3 QUESTION S 3 MARKS TIME LIMIT 0\n**");
	
printf("THE QUESTIONS WILL GET PROGRESSIVELY DIFFICULT\n");
//loop for getting intonmultidimendional array	
int size,j,score;
//the error 1 fix
size=sizeof(questions) / sizeof(questions[0]);
printf("%d\n",size);
printf("enter your option after each question ranging from A-D\n");
for(int i=0;i<size;i++){

printf("%s\n",questions[i]);

printf("%s\n",options[i]);
printf("enter your option; ");
scanf(" %c",&Aoptions);
//2nd issue i encountered
if(i==0){
if(Aoptions=='A'){
score++;
printf(" your score is:%d\n",score);

}else{
printf("good you chose wrong\n");
}
	}
else if(i==1){if(Aoptions=='D'){
score++;
printf("\n your score is:%d",score);

		}else{
printf("good you chose wrong\n");
}
}
else if(i==2){
if(Aoptions=='D'){
score++;
printf("\n your score is:%d",score);

		}else{
printf("good you chose wrong\n");
}
	
	}	
	
	
	
	
	
	
	
}	
	
	
	
	
	
}
//first error which i encountered is 
/*
way big size like since it's 300 bytes it will start to to check every single thing soo even after certain limit it won't hit \0 which acts as hidden key which stops printf and due to this it showed some random givbers to fix this i don't want to divide whole size by single index which would just equal 1 what I'll do is I'll use the memory of whole string so that it only prints the long string I'll make question [][] to questions[]


*/
/*2nd error i encounterd is like regardless of what option i enter code increments score trying to fix it
the fix:yes it's partially like i tried using my own brain like i kept condition the way like i acts counter of question it simuntaneoulsy checks the ans i used ladder if and nested if for if i==1 then we aitomatically know ans is something so I tried nested if like it checks the option we entered in scanf 
original fix: ohh dumbahh me thought we can't equate array to option we entered turns out we can it's most effecic tive my mistake was i kept = instead of == that that's why the score got incremented each time regardless of option entered how am I so low iq*/
