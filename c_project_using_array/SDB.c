/*............functions declaration...............*/

#include "SDB.h"
#include "STD.h"
void SDB_Init(STACK *ps) //initialization function
{
    ps->StackTop=0;
}

bool SDB_IsFull (STACK *ps) //checking if the SDB is full
{

    if(ps->StackTop==MAXSTACK)
    {
        printf("\nSDB is full\n\n\n");
        return true;
    }

       else
    {
        printf("\nSDB is not full\n\n\n");
        return false;
    }
}



uint8 SDB_GetUsedSize(STACK *ps) //getting used size
{

    printf("\nUsed size is %d \n\n\n ",ps->StackTop);
    return (ps->StackTop);
}



bool SDB_AddEntry(STACK *ps) //add new data of type student to the data structure
{
    if(ps->StackTop<MAXSTACK)
    {

    printf("\nStudent no %d \n\n\n",x+1);

    printf("\nStudent ID : ");
    scanf("%d",&ps->entry[ps->StackTop].Student_ID);

    printf("\nStudent Year : ");
    scanf("%d",&ps->entry[ps->StackTop].Student_year);

    printf("\nStudent course 1 ID : ");
    scanf("%d",&ps->entry[ps->StackTop].Course1_ID);

    printf("\nStudent course 1 Grade : ");
    scanf("%d",&ps->entry[ps->StackTop].Course1_grade);

    printf("\nStudent course 2 ID : ");
    scanf("%d",&ps->entry[ps->StackTop].Course2_ID);

    printf("\nStudent course 2 Grade : ");
    scanf("%d",&ps->entry[ps->StackTop].Course2_grade);

    printf("\nStudent course 3 ID : ");
    scanf("%d",&ps->entry[ps->StackTop].Course3_ID);

    printf("\nStudent course 3 Grade : ");
    scanf("%d",&ps->entry[ps->StackTop].Course3_grade);

    (ps->StackTop)++;
    x++;
    return true;

    }


    else
    {
        printf("\nStack is full\n\n\n");
        return false;
    }

}



void SDB_DeletEntry (STACK *ps) //delete last data entered by the user
{
if(x!=3)
{
ps->entry[ps->StackTop].Student_ID=0;
ps->entry[ps->StackTop].Student_year=0;
ps->entry[ps->StackTop].Course1_ID=0;
ps->entry[ps->StackTop].Course1_grade=0;
ps->entry[ps->StackTop].Course2_ID=0;
ps->entry[ps->StackTop].Course2_grade=0;
ps->entry[ps->StackTop].Course3_ID=0;
ps->entry[ps->StackTop].Course3_grade=0;

ps->StackTop--;
x--;
printf("\nDeleted successfully\n\n\n");
}

else
{
printf("\nCan not delete when used size is 3.....\n\n\n");

}

}



 bool SDB_ReadEntry (STACK *ps) //getting all data that user entered
 {

    for(int i=0;i<(ps->StackTop);i++)
    {
    printf("student no %d",i+1);
    printf("\nStudent ID :%d ",ps->entry[i].Student_ID);
    printf("\nStudent Year :%d ",ps->entry[i].Student_year);
    printf("\nStudent course 1 ID :%d ",ps->entry[i].Course1_ID);
    printf("\nStudent course 1 Grade :%d ",ps->entry[i].Course1_grade);
    printf("\nStudent course 2 ID :%d ",ps->entry[i].Course2_ID);
    printf("\nStudent course 2 Grade :%d ",ps->entry[i].Course2_grade);
    printf("\nStudent course 3 ID :%d ",ps->entry[i].Course3_ID);
    printf("\nStudent course 3 Grade :%d\n\n ",ps->entry[i].Course3_grade);
    }


 }



void SDB_GetList (STACK *ps) //getting no of students
 {
     if((ps->StackTop)>0)
     {
     printf("students  in SDB is\n");

 for(int i=1;i<=(ps->StackTop);i++)
 {
     printf("%d\n",i);
 }

     }


 }


 bool SDB_IsIdExist (uint32 id,STACK *ps) //checking that student data is exists or not
 {
    if(id <= x)
    {
        printf("\nID exists....\n\n\n");
        Sleep(1000);
        return true;
    }

       else
    {
        printf("\nID does not exist.....\n\n\n");
        Sleep(1000);
        return false;
    }
 }




void SDB_ACTION(uint32 user_choice,STACK *ps) //this function is responsible for calling other functions to be executed
 {
     uint32 wanted_id;
switch(user_choice)
    {
    case 1:
     SDB_AddEntry(ps);
    break;

    case 2:
     SDB_GetUsedSize(ps);
     break;

    case 3:
     SDB_ReadEntry(ps);
     break;

    case 4:
     SDB_GetList(ps);
     break;

    case 5:
    printf("Enter student id :");
    scanf("%d",&wanted_id);
    SDB_IsIdExist(wanted_id,ps);
     break;

    case 6:
    printf("\nLast student will be deleted...\n");
    SDB_DeletEntry(ps);
    Sleep(1000);
     break;

    case 7:
    SDB_IsFull(ps);
     break;

    default:
     break;
    }


 }

