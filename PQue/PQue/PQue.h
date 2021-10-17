/******************NODE.H CLASS TO CREATE HEADER FILE OF PRIORITY QUEUE CLASS***********************/
#ifndef PrioQueue_h
#define PrioQueue_h
#include "Queue.h"
using namespace std;

class PQue :public CQue
{
public:

	//PARAMETRIC CONSTRUCTOR
	PQue(CNode *&ptr);

	//NULL CONSTRUCTOR
	PQue();

	//PRE CONDITION TO CHECK QUEUE IS NOT EMPTY
	bool IsNotEmpty()const;

	//PRE CONDITION TO CHECK QUEUE IS NOT EMPTY
	bool IsEmpty()const;

	//FUNCTION TO ADD PRIORITY QUEUE
	PQue &insertWithPriority(CNode *&ptr);
	
	//FUNCTION TO REMOVE NODE
	CNode *getHighestPriority();

	// FRONT FUNCTION
	int front()const;

	// REAR FUNCTION
	int rear()const;
	
	//DESTRUCTOR TO RETURN MEMORY SPACE
	~PQue();
};
#endif