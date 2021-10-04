#include<iostream>
using namespace std;
#include"list.cpp"
int main()
{
	doubCirList myLinkList;
	Node *ptr;
	myLinkList.insert(10);
	myLinkList.insert(20);
	myLinkList.insert(30);
	myLinkList.insert(40);
	myLinkList.insert(50);
	myLinkList.insert(60);
	cout << "Your Link List: " << endl;
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	myLinkList.deleteNode(3);

	cout << endl;
	cout << "List after deleting the node: " << endl;
	myLinkList.display();
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	myLinkList.start();
	myLinkList.next();
	myLinkList.next();

	myLinkList.update(1302);
	cout << "\nUpdated list is here: " << endl;
	myLinkList.display();

	cout << "\nAddress of node is: " << myLinkList.searchNode(1302) << endl;
	cout << "\nSum is: " << myLinkList.sumNode() << endl;

	myLinkList.display();
	myLinkList.insertAfter(10);
	cout << endl;
	cout << "Node inserted after your the position you mentiioned: " << endl;
	myLinkList.display();
	cout << "\nSize of list is: " << myLinkList.getSize() << endl;
	myLinkList.positionInsert(3);
	cout << "Node inserted at your desired position: " << endl;
	myLinkList.display();

	myLinkList.insertAtBegin(200000);
	cout << "\nNode inserted in beginning: " << endl;
	myLinkList.display();
	cout << endl;
	myLinkList.insertAtLast(3000000);
	cout << "\nNode inserted at last: " << endl;
	myLinkList.display();
	
	system("pause");
	return 0;
}