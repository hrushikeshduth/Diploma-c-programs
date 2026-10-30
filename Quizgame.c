//quiz game
#include<stdio.h>
int main(){
char questions[][100]={"what is the largest planet in our solar system?",
"which planet has radiation belts so high that it accelerates ions?",
"what is the furthest planet from sun in our solar system?"};
char options[][100]={"A.JUPITER B.SATURN C.URANUS D.MERCURY","A.MERCURY B.NEPTUNE C.URANUS D.JUPITER","A.MERCURY B.PLUTO C.NEPTUNE D.URANUS"};
char answerkey[]={'A','D','C'};
char Eoptions='\0';
printf("**WELCOME TO THE QUIZ GAME OF ASTRONOMY 3 QUESTION S 3 MARKS TIME LIMIT 0\n**");
	
printf("THE QUESTIONS WILL GET PROGRESSIVELY DIFFICULT\n");
//loop for getting intonmultidimendional array	
int size;
size=sizeof(questions) / sizeof(questions[0][0]);
printf("%d\n",size);
for(int i=0;i<=size;i++){
printf("%s\n",questions[i]);
	
		}	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
