// CNODE PROGRAM "MAIN"

#include<iostream>
using namespace std;
#include "Node.cpp"
class list
{
	Node *headNode;
	Node *currentNode;
	Node *tailNode;
	int size;
public:
	// **************** DEFAULT CONSTRUCTOR ****************
	list()
	{
		headNode = 0;
		currentNode = 0;
		tailNode = 0;
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
				Node *newNode = new Node();						// 1. CREATE NODE
				currentNode->setNextNode(newNode);
				newNode->setNextNode(currentNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);

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
			headNode = newNode;
			currentNode = headNode;
			currentNode->setValue(n);
			currentNode->setNextNode(0);
			currentNode->setPrev(0);
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
		Node *temp;
		temp = headNode;
		cout << "My link list: " << endl;
		while (temp)
		{
			cout << temp->getValue() << endl;
			temp = temp->getNextNode();
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
					ptr1->setNextNode(0);
					--size;
				}
				else
				{	// DELETING LAST NODE
					cout << "Deleting node." << endl;
					ptr1 = currentNode->getNextNode();
					currentNode->setNextNode(ptr1->getNextNode());
					currentNode->setPrev(ptr1->getNextNode());
					ptr1->setNextNode(0);
					ptr1->setPrev(0);
					--size;
				}
			}
		}
	}
	/*	// ****************** MOVE ******************
		void move()
		{
			currentNode = currentNode->getNextNode();
		}
	*/
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
	void positionInsert(int n)
	{
		start();
		for (int i = 1; i < (n - 1); i++)
		{
			next();
		}
		insert(8172723);
	}

	//FUNCTION TO INSERT NODE AT LAST
	void insertAtLast(int n)
	{
		start();
		for (int i = 0; i < getSize() - 1; i++)
		{
			next();
		}cout << "y";
		Node *newNode = new Node();
		newNode->setValue(n);
		newNode->setNextNode(currentNode->getNextNode());
		currentNode->setNextNode(newNode);
		newNode->setPrev(currentNode);
		currentNode = newNode;
		size++;
	}

	//FUNCTION TO INSERT NODE AT BEGINNING
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