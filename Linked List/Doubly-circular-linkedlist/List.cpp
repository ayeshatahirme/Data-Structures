// CNODE PROGRAM "MAIN"

#include<iostream>
using namespace std;
#include "Node.cpp"
class doubCirList
{
	Node *headNode;
	Node *currentNode;
	int size;
public:
	// **************** DEFAULT CONSTRUCTOR ****************
	doubCirList()
	{
		headNode = 0;
		currentNode = 0;
		size = 0;
	}
	// ***************** INSERT INT VALUE ******************
	void insert(int n)
	{
		if (currentNode != 0)
		{
			// LAST INSERT
			if (currentNode->getNextNode() == 0)
			{
				Node *newNode = new Node();
				newNode->setValue(n);
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				newNode->setPrev(currentNode);
				headNode->setPrev(newNode);
				currentNode = newNode;
				size++;

			}
			// MIDDLE INSERT
			else
			{
				Node *newNode = new Node();
				newNode->setValue(n);
				newNode->setNextNode(currentNode->getNextNode());
				newNode->setPrev(currentNode);
				(currentNode->getNextNode())->setPrev(newNode);
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				size++;
			}

		}
		// FIRST INSERT
		else
		{
			Node *newNode = new Node();		//ADDRESS STORED IN NEW NODE
			newNode->setValue(n);
			newNode->setNextNode(newNode);
			newNode->setPrev(newNode);
			headNode = newNode;
			currentNode = newNode;
			size++;

		}

	}
	// ***************** Next *****************
	void next()
	{
		if (currentNode->getNextNode() != NULL)
		{
			currentNode = currentNode->getNextNode();
		}
		else
		{
			cout << "Nothing in next!" << endl;
		}
	}
	// ****************** Back ******************
	void back()
	{
		if (currentNode->getprev() != NULL)
		{
			currentNode = currentNode->getprev();
		}
		else
		{
			cout << "Nothing in previous!" << endl;
		}
	}
	// ***************** display ******************
	void display()
	{
		start();
		cout << "List of nodes: " << endl;
		for (int i = 0; i < getSize(); i++)
		{
			cout << "Node " << i + 1 << " :";
			cout << get();
			next();
			cout << endl;
		}
	}
	// ***************** Moves pointer at head *****************
	void start()
	{
		currentNode = headNode;
	}
	// ***************** get size ******************
	int getSize()
	{
		return size;
	}
	// ***************** UPDATE ********************
	void update(int n)
	{
		currentNode->setValue(n);
	}
	//**************** deleting nodes ****************
	void deleteNode(int n)
	{
		Node *ptr1 = new Node();
		Node *ptr2 = new Node();
		// EMPTY NODE
		if (currentNode == 0)
		{
			cout << "Node is Empty." << endl;
		}
		else
		{
			if (n > getSize() && n < getSize())
			{
				cout << "The node is not present in the list." << endl;
			}
			else
			{
				// DELETING FIRST NODE
				start();
				for (int i = 1; i < (n - 1); ++i)
				{
					next();
				}
				if (currentNode == headNode && n == 1)
				{
					cout << "Deleting Head." << endl;
					ptr1 = headNode;
					currentNode = headNode = headNode->getNextNode();
					headNode->setPrev(ptr1->getprev());
					ptr2 = ptr1->getprev();
					ptr2->setNextNode(headNode);
					ptr1->setNextNode(0);
					ptr1->setPrev(0);
					--size;
				}
				else
				{	// DELETING LAST NODE
					ptr2 = headNode;

					for (int i = 1; i < getSize(); ++i)
					{
						ptr2 = ptr2->getNextNode();
					}
					if (n == getSize())
					{
						ptr2 = ptr2->getprev();
					}
					cout << "For DELTE AT END and FROM MEDIUM" << endl;
					ptr1 = currentNode->getNextNode();
					currentNode->setNextNode(ptr1->getNextNode());
					headNode->setPrev(ptr2);
					ptr1->setNextNode(0);
					ptr1->setPrev(0);
					--size;
				}
			}
		}
	}
	
	// ****************** GET *******************
	int get()
	{
		return currentNode->getValue();
	}
	// **************** SEARCH ******************

	Node* searchNode(int n)
	{
		if (currentNode == 0)
		{
			cout << "The list is EMPTY!" << endl;
		}
		else
		{
			for (int i = 0; i < (getSize() - 1); i++)
			{
				if (n == get())
				{
					next();
					return currentNode->getNextNode();
				}
			}
		}

	}
//	**************** SUM ******************
	int sumNode()
	{
		int sum = 0;
		start();
		for (int i = 0; i < getSize(); i++)
		{
			sum = sum + get();
			next();
		}
		return sum;
	}
//	**************** INSERT AFTER ******************
	void insertAfter(int n)
	{
		start();
		for (int i = 0; i < getSize(); i++)
		{
			if (n == get())
			{
				insert(1000);
				break;
			}
			next();
		}
	}
//	**************** POSITION INSERT ******************
	void positionInsert(int n)
	{
		start();
		for (int i = 1; i < (n - 1); i++)
		{
			next();
		}
		insert(8172723);
	}
	
//	**************** INSERT AT LAST ******************
	void insertAtLast(int n)
	{
		start();
		for (int i = 0; i < getSize() - 1; i++)
		{
			next();
		}
		Node *newNode = new Node();
		newNode->setValue(n);
		newNode->setNextNode(currentNode->getNextNode());
		currentNode->setNextNode(newNode);
		newNode->setPrev(currentNode);
		currentNode = newNode;
		size++;
	}

//	**************** INSERT IN BEGINNING ******************
	void insertAtBegin(int n)
	{
		Node *newNode = new Node();
		newNode->setValue(n);
		newNode->setNextNode(headNode);
		newNode->setPrev(0);
		headNode = newNode;
		currentNode = newNode;
		size++;
	}

};