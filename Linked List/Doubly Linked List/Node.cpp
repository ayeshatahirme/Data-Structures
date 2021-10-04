// CNODE PROGRAM CLASS "NODE"
// ADDED PREVIOS NODE SET & GET FUNCTIONS

class Node
{
	int value;
	Node *nextnode, *prevnode;
public:
	void setValue(int v)
	{
		value = v;
	}
	void setNextNode(Node *nn)
	{
		nextnode = nn;
	}
	void setPrev(Node *pv)
	{
		prevnode = pv;
	}
	int getValue()
	{
		return value;
	}
	Node *getNextNode()
	{
		return nextnode;
	}
	Node *getprev()
	{
		return prevnode;
	}
};
