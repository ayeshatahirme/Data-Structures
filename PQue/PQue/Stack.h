
///////////////////////////////Stack.H CLASS TO CREATE HEADER FILE OF NODE CLASS//////////////////////////////
#ifndef Stack_h
#define Stack_h
#include <fstream>
#include "CNode.h"
using namespace std;

class Cstack
{
protected:
	CNode *top;
	int count = 0;
public:
	//DAFAULT CONSTRUCTOR

	Cstack();

	//PARAMETRIC CONSTRUCTOR
	Cstack(CNode *ptr);

	//PARAMETRIC CONSTRUCTOR TO TAKE INPUT FROM FILE
	Cstack(ifstream &inFile);

	//FUNCTION TO GET THE SIZE OF STACK
	int getCount()const;

	//WRITE TO FILE FOR STACK
	void writeToFile(ofstream &oFile);

	//FUNCTION TO READ FROM FILE
	void readFromFile(ifstream &inFile);

	//PRE CONDITION FUNCTION TO CHECK NODE IS NOT EMPTY
	bool IsNotEmpty()const;

	//PRE CONDITION TO CHECK CNODE IS EMPTY
	bool IsEmpty()const;

	//FUNCTIION TO ADD NODE
	Cstack *push(CNode *&ptr);

	//FUNCTION TO REMOVE NODES
	CNode *pop();

	//FUNCTION TO PRINT STACK
	void print()const;

	//FUNCTION TO COPY STACK INTO ANOTHER CSTACK
	Cstack(const Cstack &src);

	//FUNCTION TO EQUAL TWO STACK
	Cstack &operator=(const Cstack &obj);

	//DESTRUCTOR TO RETURN MEMORY SPACE
	~Cstack();
};
#endif