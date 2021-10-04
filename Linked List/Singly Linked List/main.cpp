#include<iostream>
using namespace std;
#include "list.cpp"
int main()
{
	list myLinkList;
	Node *ptr;
	myLinkList.insert(10);
	myLinkList.insert(20);
	myLinkList.insert(30);
	myLinkList.insert(40);
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.insertAtBegin(100);
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.insertAtEnd(200);
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.start();
	myLinkList.move();
	myLinkList.move();
	myLinkList.update(1302);
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.deleteNode(3);
	myLinkList.start();
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.deleteNode(1);
	myLinkList.start();
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	ptr = myLinkList.searchNode(40);
	cout << "Address is: " << ptr << endl;
	cout << "Sum of nodes is: " << myLinkList.sumNode() << endl;
	
	myLinkList.insertAfter(10);
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.positionInsert(3);
	myLinkList.display();
	cout << endl;
	myLinkList.sortList();
	myLinkList.display();
	system("pause");
	return 0;
}