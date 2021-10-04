// CNODE PROGRAM "MAIN"

#include<iostream>
using namespace std;
#include "Node.cpp"
class list
{
	Node *headNode;
	Node *currentNode;
	Node *lastCurrentNode;
	int size;
public:
	list()				// DEFAULT CONSTRUCTOR
	{
		headNode = 0;
		currentNode = 0;
		lastCurrentNode = 0;
		size = 0;
	}
	void insert(int n)		//INSERT INT VALUE
	{
		if (currentNode != 0)
		{
			if (currentNode->getNextNode() == 0)
			{
				Node *newNode = new Node();			// 1. CREATE NODE
				lastCurrentNode = currentNode;
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			}
			else
			{
				Node *newNode = new Node();
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				lastCurrentNode = currentNode;
				currentNode = newNode;
				currentNode->setValue(n);
				size++;
			}

		}
		else
		{
			Node *newNode = new Node();		//ADDRESS STORED IN NEW NODE
			headNode = newNode;
			currentNode = headNode;
			currentNode->setValue(n);
			currentNode->setNextNode(0);
			size++;
		}

	}
	void start()		//MOVES POINTER TO HEAD
	{
		lastCurrentNode = 0;
		currentNode = headNode;
	}
	void move()			
	{
		lastCurrentNode = currentNode;
		currentNode = currentNode->getNextNode();
	}
	int get()
	{
		return currentNode->getValue();
	}
	int getSize()
	{
		return size;
	}
	void insertAtBegin(int n)
	{
		Node *newNode = new Node();
		newNode->setNextNode(headNode);
		headNode = newNode;
		currentNode = headNode;
		lastCurrentNode = 0;
		currentNode->setValue(n);
		size++;
	}
	void insertAtEnd(int n)
	{
		for (int i = 0; i < (getSize()-1); i++)
		{
			move();
		}
		Node *newNode = new Node();			// 1. CREATE NODE
		lastCurrentNode = currentNode;
		currentNode->setNextNode(newNode);
		currentNode = newNode;
		currentNode->setValue(n);
		currentNode->setNextNode(0);
		size++;
	}
	void update(int n)
	{
		currentNode->setValue(n);
	}
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
	
	void deleteNode(int n)
	{
		start();
		Node *newNode = new Node();

		if (n == 1)
		{
			move();
			newNode = headNode;
			delete headNode;
			headNode = currentNode;
			lastCurrentNode = 0;
			cout << "First node deleted!" << endl;
		}
		else
		{
			for (int i = 1; i < n; i++)
			{
				move();
			}
			lastCurrentNode->setNextNode(currentNode->getNextNode());
			delete currentNode;
			currentNode = lastCurrentNode;
		}
		size--;
	}

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
					move();
					return currentNode->getNextNode();
				}
			}
		}
		
	}
	int sumNode()
	{
		int sum = 0;
		for (int i = 0; i < getSize(); i++)
		{
			sum = sum + get();
			move();
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
				insert(1);
				break;
			}
			move();
		}
	}
	void positionInsert(int n)
	{
		start();
		for (int i = 1; i < (n - 1); i++)
		{
			move();
		}
		insert(8172723);
	}

	void swap(int a, int b)
	{

	}

};