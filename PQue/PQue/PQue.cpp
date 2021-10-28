/**********************PROGRAM TO WRITE IMPLEMENTATION OF Cprio CLASS**************************/
#include<iostream>
#include "PQue.h"
using namespace std;

//PARAMETRIC CONSTRUCTOR
PQue::PQue(CNode *&ptr) :CQue(ptr)
{

}

//NULL CONSTRUCTOR
PQue::PQue() 
{

}

//PRE CONDITION TO CHECK QUEUE IS NOT EMPTY
bool PQue::IsNotEmpty()const
{
	return CQue::IsNotEmpty();
}

//PRE CONDITION TO CHECK QUEUE IS NOT EMPTY
bool PQue::IsEmpty()const
{
	return CQue::IsEmpty();
}
//FUNCTION TO ADD PRIORITY QUEUE
PQue& PQue::insertWithPriority(CNode *&ptr)
{
	if (!top)
	{
		tail = top = ptr;
		tail->next = ptr = NULL;
		return *this;
	}
	if (top->pri < ptr->pri)
	{

		Cstack::push(ptr);
		return *this;
	}
	else
	{
		if (tail->pri >= ptr->pri)
		{

			CQue::enQueue(ptr);
			return *this;
		}
		else
		{

			CNode *bptr, *rptr;
			bptr = rptr = top;
			//while (rptr->pri >= ptr->pri)
			{
				bptr = rptr;
				rptr = rptr->next;
			}
			ptr->next = rptr;
			bptr->next = ptr;
			ptr = NULL;
			return *this;
		}
	}
}

//FUNCTION TO REMOVE QUEUE
CNode* PQue::getHighestPriority()
{
	return CQue::dequeue();
}

// FUNCTION THAT RETURNS DATA WITH HIGHEST PRIORITY
int PQue::front()const
{
	return CQue::front();
}

// FUNCTION THAT RETURNS DATA WITH HIGHEST PRIORITY
int PQue::rear()const
{
	return CQue::rear();
}

PQue::~PQue()
{
	CQue::~CQue();

}