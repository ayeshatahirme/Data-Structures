///////////////////////////////Stack.H CLASS TO CREATE HEADER FILE OF NODE CLASS//////////////////////////////

#ifndef Node_h
#define Node_h
#include <fstream>

using namespace std;
class CNode
{
	int data;

	//PUBLIC MEMBERS
public:
	CNode *next;
	CNode();									//NULL CONSTRUCTOR
	CNode(int d);								//PARAMERETIZED CONSTRUCTOR
	CNode(ifstream &inFile);					//PARAMETRIC CONSTRUCTOR TO READ FROM FILE
	void readFromFile(ifstream &inFile);		//FUNCTION TO TAKE INPUT FROM FILE
	void writeToFile(ofstream &oFile);			//FUNCTION TO WRITE INTO THE FILE 
	int getData()const;							//INPUT VALUE
	CNode& setData(int data);					//SET VALUE TO 'data'
	void print();								//PRINT VALUE


};
#endif