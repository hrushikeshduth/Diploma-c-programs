#include <stdio.h>
// here i added * asterisk which denotes to go to adress and able to change value inside the adress by this we can update the value of adresses void function is used so it can directly return the value into the main adress
void entersides(int *sid1,int *sid2,int *sid3){
printf("enter the value of s1:\n");

scanf("%d",sid1);


printf("enter the value of s2:\n");

scanf("%d",sid2);

printf("enter the value of s3:\n");
scanf("%d",sid3);

//RETURN CANNOT SEND MULTIPLE VARIABLES
//INSTEAD WE NEED SOMETHING THAT UPDATES THE VALUE OF VARIABLE BY GOINF DIRECTLY INTO ITS ADRESS CAN YOU GUESS WHAT IT IS IT IS POINTER





}
int main(){
int sides;

while(1){
printf("enter the number of sides:\n");
scanf("%d",&sides);
if(sides == 3){

printf("yes it's a triangle you can go to next step\n");
break;
}
else{
printf("a triangle can only have 3 sides!!\n");
continue;
}
}
int s1,s2,s3;
entersides(&s1,&s2,&s3);
//i have adress of the sides here 
//always keep most specific condition first 
if(s1==s2&& s2==s3){
printf("all sides  are equal hence it's equilateral triangle\n");
	
}
else if(s1==s2||s2==s3||s3==s1){
printf("two sides are equal hence it's isosceles triangle\n");
}
 
else{
printf("since all sides are not equal it's a scelene triangle\n");
	
}
return 0;
}

