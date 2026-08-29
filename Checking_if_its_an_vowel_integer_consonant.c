#include <stdio.h>
int main(){
	char alpha;
	printf("enter a vovel (a e i o u or A E I O U)");
	scanf(" %c",&alpha);
	
if(alpha == 'a' || alpha == 'A'){
	
	printf("it's a vowel");
	
}
else if(alpha == 'e' || alpha == 'E' ){
	printf("it's a vowel");
}
else if(alpha == 'i' || alpha == 'I' ){
	printf("it's a vowel");
}
else if(alpha == 'o' || alpha == 'O' ){
	printf("it's a vowel");
}
else if(alpha == 'u' || alpha == 'U' ){
	printf("it's a vowel");
}
else if (alpha >= 'A' && alpha <= 'Z') {
	printf("it's a consonant ");
}
else if (alpha >= 'a' && alpha <= 'z') {
	printf("it's a consonant ");
}
else if(alpha >= '0' && alpha <= '9'){
	printf("it's a number ");}
else{
		printf("it's a special symbol  ");
		
	}

return 0;	
	
	
	
	
	
	
	
	
	
	
	
	
	



