
//Listing 13.4 - Using an infinite loop to implement a menu system; page 308

#include <stdio.h>

#define DELAY 150000000

int menu(void);
void delay(void);

int main(void)
{
    int choice;

    while(1)
    {
        //get user selection
        choice = menu();

        //branch on input
        if (choice==1)
        {
            puts("\n\t\t-----> Executing task A.");
            delay();
        }
        else if (choice==2)
        {
            puts("\n\t\t-----> Executing task B.");
            delay();
        }
        else if (choice==3)
        {
            puts("\n\t\t-----> Executing task C.");
            delay();
        }
        else if (choice==4)
        {
            puts("\n\t\t-----> Executing task D.");
            delay();
        }
        else if (choice==5)  // exit program
        {
            puts("\n\t\t-----> Exiting program now....\n");
            delay();
            break;
        }
        else
        {
            puts("\n\t\t-----> Invalid choice, try again");
            delay();
        }

    }
    return 0;
}

//displays a menu and inputs user's selection
int menu(void)
{
    int reply;

    puts("\n******************");
    puts("\nEnter 1 for task A.");
    puts("\nEnter 2 for task B.");
    puts("\nEnter 3 for task C.");
    puts("\nEnter 4 for task D.");
    puts("\nEnter 5 to exit program");

    // MUST use "&" because an address is required for scanf command and you
    //  need the address of variable reply
    scanf("%d", &reply);

    return reply;

}

void delay(void)
{
    long x;
    for(x=0; x<DELAY; x++)
        ;
    // this function basically does nothing but have program wait

}