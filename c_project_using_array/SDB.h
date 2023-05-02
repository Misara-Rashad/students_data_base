#ifndef SDB_H_INCLUDED
#define SDB_H_INCLUDED


#include "STD.h"

//new data types
typedef struct
{
uint32 Student_ID;
uint32 Student_year;
uint32 Course1_ID;
uint32 Course1_grade;
uint32 Course2_ID;
uint32 Course2_grade;
uint32 Course3_ID;
uint32 Course3_grade;
} student;


//using stack array
#define MINSTACK 3
#define MAXSTACK 10
typedef struct stack
{
uint8 StackTop;
student entry[MAXSTACK];
uint8 choice;
}STACK;


static uint8 x=0;



/*............functions prototypes...........*/
void SDB_Init(STACK *ps);
bool SDB_IsFull (STACK *ps);
uint8 SDB_GetUsedSize(STACK *ps);
bool SDB_AddEntry(STACK *ps);
void SDB_DeletEntry (STACK *ps);
bool SDB_ReadEntry (STACK *ps);
void SDB_GetList (STACK *ps);
bool SDB_IsIdExist (uint32 id,STACK *ps);
void SDB_APP(STACK *ps);
void SDB_ACTION(uint32 user_choice,STACK *ps);

#endif // SDB_H_INCLUDED
