#include <stdio.h>
#include <string.h>
int main()

{


char adjective1[50]="";
char adjective2[50]="";
char adjective3[50]="";
char noun[50]="";
char verb[50]="";


printf("enter adjective 1");
fgets(adjective1,sizeof(adjective1),stdin);
adjective1[strlen(adjective1)-1]='\0';



printf("enter adjective 2");
fgets(adjective2,sizeof(adjective2),stdin);
adjective2[strlen(adjective2)-1]='\0';


printf("enter adjective 3");
fgets(adjective3,sizeof(adjective3),stdin);
adjective3[strlen(adjective3)-1]='\0';


printf("enter noun");
fgets(noun,sizeof(noun),stdin);
noun[strlen(noun)-1]='\0';


printf("enter verb(w/-ing");
fgets(verb,sizeof
(verb),stdin);
verb[strlen(verb)-1]='\0';

printf("my friend is very %s,%s and %s\n",adjective1,adjective2,adjective3);


printf("he is always %s %s\n",verb,noun);
}






