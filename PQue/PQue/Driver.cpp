// ************ TASK 2 ************

#include <iostream>
#include "PQue.h"
using namespace std;
int main()
{
	int P1, P2;
	CNode *ptr1 = new CNode(10, 5);
	CNode *ptr2 = new CNode(26, 4);
	CNode *ptr3 = new CNode(44, 2);
	CNode *ptr4 = new CNode(56, 3);
	CNode *ptr5 = new CNode(07, 1);
	PQue myPQueueList;

	myPQueueList.insertWithPriority(ptr1);
	myPQueueList.insertWithPriority(ptr2);
	myPQueueList.insertWithPriority(ptr3);
	myPQueueList.insertWithPriority(ptr4);
	myPQueueList.insertWithPriority(ptr5);

	myPQueueList.print();
	cout << endl;
	
	myPQueueList.getHighestPriority();
	myPQueueList.getHighestPriority();
	myPQueueList.print();
	cout << endl;
	
	cout << "Front: " << myPQueueList.front() << endl;
	cout << endl;

	cout << "Rear: " << myPQueueList.rear() << endl;	
	cout << endl;

	system("pause");
	return 0;
}