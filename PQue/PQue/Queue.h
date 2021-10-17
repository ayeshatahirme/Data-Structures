// Queue.h

#ifndef Queue_h
#define Queue_h
#include "Stack.h"
using namespace std;

class CQue :protected Cstack
{
public:
	CNode *tail;

	// NULLCONSTRUCTOR
	CQue();

	// PARAMETERIZED CONSTRUCTOR
	CQue(CNode *&ptr);

	// FUNCTION TO CHECK NOT AN EMPTY QUEUE
	bool IsNotEmpty() const;

	// FUNCTION TO CHECK AN EMPTY QUEUE
	bool IsEmpty() const;

	// FUNCTION TO REMOVE VALUE TO QUEUE
	CNode *dequeue();

	// FUNCTION TO ADD A VALUE TO QUEUE
	CQue &enQueue(CNode *&ptr);

	// FUNCTION TO PRINT VALUE OF QUEUE
	void print()const;

	// FRONT FUNCTION
	int front()const;

	// REAR FUNCTION
	int rear()const;

	// DESTRUCTOR
	~CQue();
};
#endif
