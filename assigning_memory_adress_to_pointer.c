//assigning memory adress to a pointer;
#include<stdio.h>
int main() {
int *p,c=5;
//assigning MEMEORY adress to pointer
p=&c;
//assigned memory adress of c to pointer p
//in this case the pointer holds the adress of c but the p it'self is stored on diffrent adress so it prints diffrent adress
printf("%p\n",(void*)&p);
printf("%p\n",(void*)&c);
//in this case they both print same because we are not asking to print adress of pointer itself we are asking to print value of pointer which is adress of c
printf("%p\n",(void*)p);
printf("%p",(void*)&c);

	
	
	
	
	
//also the best practice is using (void*) to avoid compiler warnings while using %p
	
	
	
	
}