//The "Memory Corruption" Simulation 💻The Scenario:You are writing a program that simulates a locked system memory bank. The bank is protected by 5 encrypted security blocks (an array).The Goal:Write a program where the user selects a memory block, inputs a "byte overwrite" value, and tries to corrupt the memory bank until every single block is successfully dropped to 0 or lower.
	 //The "Memory Corruption" Simulation 💻The Scenario:You are writing a program that simulates a locked system memory bank. The bank is protected by 5 encrypted security blocks (an array).The Goal:Write a program where the user selects a memory block, inputs a "byte overwrite" value, and tries to corrupt the memory bank until every single block is successfully dropped to 0 or lower.
#include <stdio.h>

int main()
{
    int securityblock, byteoverwrite;
    printf("**welcome to memory bank**\n");

    int array[5] = {10, 15, 20, 25, 30};
    printf("the security block is ");
    while (1) // Changed to a while loop for clarity
    {
        for (int i = 0; i < 5; i++)
        {
            securityblock = array[i];
            printf("[%d] ", securityblock);
        }
        printf("\nWhich security block do you want to choose from (0-4)\n");

        int accessindex;

        scanf("%d", &accessindex);
        if (accessindex > 4 || accessindex < 0)
        {
            printf("please choose a valid access index\n"); // Added newline for better formatting
            continue;
        }
        printf("you chose index value %d \n it's value:%d\n", accessindex, array[accessindex]); // Added newline for better formatting

        printf("how much bytes you want to overwrite?\n");
        scanf("%d", &byteoverwrite);
        array[accessindex] = array[accessindex] - byteoverwrite;
        printf("performing byte overwrite!!!!\n");
        printf("BYTE OVERWRITTEN SUCCESSFULLY DONE %d \n", array[accessindex]);

        // Checking if all element in the array is 0
       int check=0;
        for (int i = 0; i < 5; i++)
        {

         
if(array[i]<=0 ){
check++;
}
continue;
        }
if(check == 5){
printf("YOU HAVE SUCCESFULLY BROKEN MEMORY CODE");	
break;	
}



        
       
    }
}
