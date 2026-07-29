#include <stdio.h>
int main()
{
	int inttype;
float floattype;

double doubletype;
char chartype;

printf("inttype: %zu",sizeof(inttype));
printf("\nfloattype : %zu",sizeof(floattype));

printf("\ndoubletype : %zu",sizeof(doubletype));
printf("\ncharactertype : %zu",sizeof(chartype));


return 0;

}