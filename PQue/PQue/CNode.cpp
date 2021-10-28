/////////////////////////////PROGRAM TO WRITE IMPLEMENTATION OF CNODE CLASS///////////////////////////

#include<iostream>
#include<fstream>
#include "CNode.h"
using namespace std;

//NULL CONSTRUCTOR
CNode::CNode()
{
	pri = 0;
	data = 0;
	next = NULL;
}
//PARAMETERIZED CONSTRUCTOR
CNode::CNode(int d, int e)
{
	data = d;
	pri = e;
}
//PARAMETRIC CONSTRUCTOR TO READ FROM FILE
CNode::CNode(ifstream &inFile)
{
	inFile.read((char*)this, sizeof(this));
}

//FUNCTION TO TAKE INPUT FROM FILE
void CNode::readFromFile(ifstream &inFile)
{
	inFile.read((char*)this, sizeof(*this));
}

//FUNCTION TO WRITE INTO THE FILE 
void CNode::writeToFile(ofstream &oFile)
{

	oFile.write((char*)this, sizeof(*this));
}


//FUNCTION TO INPUT VALUE
int CNode::getData() const
{
	return data;
}
//FUNCTION TO STORE VALUE
CNode & CNode::setData(int data, int e)
{
	this->data = data;
	this->pri = e;
	return *this;
}
//FUNCTION TO PRINT STORED VALLUE
void CNode::print()
{
	cout << data << " " << endl;
}

