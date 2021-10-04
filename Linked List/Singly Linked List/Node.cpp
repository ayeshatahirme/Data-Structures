// CNODE PROGRAM CLASS "NODE"

class Node
{
	int value;
	Node *nextnode;								// POINTER OF SAME CLASS TYPE
public:
	void setValue(int v)
	{
		value = v;
	}
	void setNextNode(Node *nn)
	{
		nextnode = nn;
	}
	int getValue()
	{
		return value;
	}
	Node *getNextNode()
	{
		return nextnode;
	}
};
