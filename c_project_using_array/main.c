
/*.........includes section.......*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "SDB.h"
#include "STD.h"
/*..............*/



int main()
{
    printf("Welcome to my program......!\n\n");
    STACK s; //creating a data structure of STACK type named s
    SDB_Init(&s); //initialization for the data structure
    SDB_APP(&s); // calling the main program to be excuted
    return 0;
}
