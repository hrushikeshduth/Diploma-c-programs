#include <stdio.h>
#include<string.h>
//function void function_name(parametrs){ }
void HappyBirthday(int age,
char name[50])//parameter is what function expects
{
	printf("HAPPY BIRTHDAY TO YOU!\n");
	printf("HAPPY BIRTHDAY TO YOU!\n");
	printf("HAPPY BIRTHDAY %s \n",name);
	printf(" You are %d years old now ",age);
	
}
int main( )
{
int age='0';
printf("enter your age\n");
scanf("%d",&age);
while(getchar()!='\n');
char name[50]="";
printf("enter your name\n");
fgets(name,sizeof(name),stdin);

name[strlen(name)-1]='\0';


HappyBirthday( age,name);//argument is what we need to give function

return 0;
}
