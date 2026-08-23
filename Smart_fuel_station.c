#include<stdio.h>
int main()
{
    float petrol,diesil;
    //to calculate amount of petrol of diesil
    int n,choice;
    char currency;
    currency ='R';
    printf("enter the number of litres:");
    
    while(1)
    {
        if(scanf("%d",&n)!=1 || n<=0)
        {
            printf("\n ERROR enter a valid input\n");
            
            while(getchar()!='\n');
            continue;
        }
            /* ⚠️ CRITICAL ERROR 1: 
               Because of missing brackets below, the computer thinks this 'break' 
               belongs to the 'while(getchar())' loop right above it! 
               It only stops the character cleaner, so the program keeps running 
               down into the choices even if you type -1. */
            
            
        /* ⚠️ CRITICAL ERROR 2: MISSING CLOSING BRACKET '}' HERE!
           You need to put a '}' right here to close the 'if' statement box. 
           Without it, the 'else' below is accidentally trapped inside the 'if'. */
           
           
    // to calculate number of litres and total_bill
    
        /* ⚠️ CRITICAL ERROR 3: MISPLACED ELSE
           Because you didn't close the 'if' box above, the compiler sees this 
           'else' inside the 'if' and completely breaks or behaves randomly. */
           
        printf("enter the choices\n");
        printf("\nenter 1 for cost of petrol and 2 for cost of diesil");
        scanf("%d",&choice);
        while(getchar()!='\n');
        /*this statemwnt tells if the scanf enters character then it will simply delete from its memory so taht the program dosent crash 
        if we dont then char simple stores it in a bag the a value gets confused by next loop it will print exact same thing we use this to delete the stored value */
        
        //if the choice  we entered is not equal 1 and 2
        while(1)
        {
            // while is used so that the program dosent stop when we enter wrong choice it will run until we enter a correct choice 
            if(choice != 1 && choice != 2)
            {
                printf("enter a valid choice you idiot");
                scanf("%d",&choice);
                while(getchar()!='\n');
                continue;
                //continue is used so that the program return to top of loop and asks input again when the codition is true
            }
            else if(choice ==1)
            {
                petrol=n*100;
                printf("\ntotal_bill: %c%.2f",currency,petrol);
                break;
            }
            else
            {
                diesil=n*90;
                printf(" \n total bill: %c%.2f",currency,diesil);
                break;
            }
        }
    }
    // Closes the misplaced else block
    
// Closes the main while(1) loop
        
    

/* error fixed is that before else if it kept asking put an expression to fix that we should checl for unesacry brackets and make sure the if else if and else are brached in exact same loop */
//now my issue is it dosent stop if scanf is -1 it still goes to next body

} // Closes the main() function

