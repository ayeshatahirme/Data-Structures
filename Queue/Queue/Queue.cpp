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
	CNode * CQue::remove()
	{
		if (!top)
		{
			return Cstack::pop();
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
	CQue & CQue::Add(CNode *& ptr)
	{
		if (tail)
		{
			tail->next = ptr;
			tail = tail->next;
		}
		else
		{
			tail = top = ptr;
		}
		tail->next = NULL;
		ptr = NULL;
		return *this;
	}

	// FUNCTION TO PRINT QUEUE
	void CQue::print() const
	{
		Cstack::print();
	}
	
	// COPY CONSTRUCTOR
	CQue::CQue(const CQue & src)
	{
		this->top = src.top;
		this->tail = src.tail;
		if (src.top)
		{
			CNode *sptr, *dptr;
			top = dptr = new CNode(*src.top);
			sptr = src.top->next;
			while (sptr)
			{
				dptr->next = new CNode(*sptr);
				dptr = dptr->next;
				sptr = sptr->next;
			}
		}
	}
	
	// ASSIGNMENT OPERATOR
	CQue & CQue::operator=(const CQue & obj)
	{
		if (this == &obj)
			return *this;

		if (true)
		{
			CQue temp;
			temp.top = top;
			temp.tail = tail;
		}

		if (true)
		{
			CQue temp = obj;
			top = temp.top;
			tail = temp.tail;
			temp.top = NULL;
			temp.tail = NULL;
		}
	}
	
	// DESTRUCTOR
	CQue::~CQue()
	{
		Cstack::~Cstack();
		//	delete tail;
		tail = NULL;
	}
