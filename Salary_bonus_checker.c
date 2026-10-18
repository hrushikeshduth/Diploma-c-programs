/* Day 16: Grade A performance gets a 10% bonus, Grade B gets 5%. If a salary is under ₹15,000, give an extra 2% bonus regardless of grade. Write this logic. */

#include <stdio.h>
int main()
{
	
float salary;
printf("enter your salary per month:");
scanf("%f",&salary);
if(salary<15000){
printf("you are eligible for 2% bonus \n");	
salary=salary+2/100;
printf("\nyour updated salary is :%.2f",salary);


	
	
	
	
}

float marks;
printf("\nenter your marks per semester avg(out of 100):");
while(1){
scanf("%f",&marks);
if(marks>100 || marks<0 ){
printf("pls enter valid marks");
continue;	
}
break;
}
printf("\nuser info:");
printf("\nsalary:%.2f",salary);
printf("\nmarks:%.2f",marks);
printf("\nchecking your eligibility for bonussss...");

if(marks>=90){
printf("\nyour grade is A\n");
printf("congratulations you are eligible for %10 bonus \n");	
salary=salary+10/100;
printf("\nyour updated salary is :%.2f",salary);


	
	
	
	
}
else if(marks<90 && marks > 80){
printf("your grade is B\n");
printf("congratulations you are eligible for %5 bonus \n");	
salary=salary+5/100;
printf("\nyour updated salary is :%.2f",salary);

}
else{
	
printf("\n work harder");	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
