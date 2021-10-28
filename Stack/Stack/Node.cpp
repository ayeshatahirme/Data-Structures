// CNODE PROGRAM CLASS "NODE"

#include<iostream>
using namespace std;

class Node
{
	int value;
public:
	Node *next;								// POINTER OF SAME CLASS TYPE
	Node()
	{
		value = 0;
		next = NULL;
	}
	Node(int d) :value(d)
	{

	}
	void setValue(int v)
	{
		value = v;
	}
	void setNextNode(Node *nn)
	{
		next = nn;
	}
	int getValue()
	{
		return value;
	}
	Node *getNextNode()
	{
		return next;
	}
	void print()
	{
		cout << value << endl;
	}

};
