#include "SDB.h"
#include "STD.h"



void SDB_APP(STACK *ps) //main program
{
    uint8 choice;
while(1)
{

    printf("\n");
    printf("1. To add entry, enter 1\n");
    printf("2. To get used size in database, enter 2\n");
    printf("3. To read student data, enter 3\n");
    printf("4. To get the list of all student IDs, enter 4\n");
    printf("5. To check is ID is existed, enter 5\n");
    printf("6. To delete student data, enter 6\n");
    printf("7. To check is database is full, enter 7\n");
    printf("8. To exit enter 0\n");

    printf("Please enter your choice:\n");
    scanf("%d",&choice); // getting user choice to pass its value to SDB_ACTIOn function
    if(choice==0)
    {
        break;
    }
    else
    {
        SDB_ACTION(choice,ps);
    }

}

}





