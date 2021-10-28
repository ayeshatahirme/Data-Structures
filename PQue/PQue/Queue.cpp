// Queue.cpp

#include<iostream>
#include "Queue.h"

	//NULL CONSTRUCTOR
CQue::CQue()
{
	tail = NULL;
}

// PARAMETERIZED CONSTRUCTOR
CQue::CQue(CNode *& ptr) :Cstack(ptr)
{
	tail = top;
}

// FUNCTION TO CHECK A FILLED QUEUE
bool CQue::IsNotEmpty() const
{
	return Cstack::IsNotEmpty();
}

// FUNCTION TO CHECK AN EMPTY QUEUE
bool CQue::IsEmpty() const
{
	return Cstack::IsEmpty();
}

//FUNCTION TO REMOVE QUEUE
CNode * CQue::dequeue()
{
	if (!top)
	{
		cout << "Queue is empty" << endl;
		return NULL;
	}
	else
	{
		if (!top->next)
		{
			tail = NULL;
		}

		return Cstack::pop();
	}
}

// FUNCTION T0 ADD A DATA VALUE IN QUEUE
CQue & CQue::enQueue(CNode *& ptr)
{
	if (top)
	{
		tail->next = ptr;
		tail = tail->next;
		tail->next = NULL;
	}
	//FOR INSERTING FIRST NODE
	else
	{
		tail = top = ptr;
		ptr->next = NULL;
	}
	ptr = NULL;
	return *this;
}

// FUNCTION TO PRINT QUEUE
void CQue::print() const
{
	Cstack::print();
}

// RETURN VALUE POINTED BY FRONT
int CQue::front()const
{
	return (top->getData());
}

// RETURN VALUE POINTED BY REAR
int CQue::rear()const
{
	return tail->getData();
}

// DESTRUCTOR
CQue::~CQue()
{
	Cstack::~Cstack();
	//	delete tail;
	tail = NULL;
}
