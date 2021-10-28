
#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{

	CNode *ptr4 = new CNode(11);
	//DRIVER TEST CODE FOR NULL CONSTRCTOR
	CQue s;
	if (s.IsNotEmpty())
		cout << "\nErrorInEmptyObjectConstructor" << endl;
	else
		cout << "\nEmptyObjectConstructor:OK" << endl;
	s = CQue(ptr4);
	//DRIVER TEST CODE FOR PARAMETRIC CONSTRCTOR
	CNode *ptr = new CNode(2);
	CNode *ptr3 = new CNode(56);

	CQue s1(ptr);
	if (s1.IsEmpty())
		cout << "\nErrorInEmptyObjectParmetricConstructor" << endl;
	else
		cout << "\nEmptyObjectParametricConstructor:OK" << endl;


	//DRIVER TEST CODE FOR IS EMPTY FUNCTION
	if (s.IsEmpty())
		cout << "\nObjectIsEmptyFunction:OK" << endl;
	else
		cout << "\nErrorInObjectIsEmptyfunction" << endl;


	//DRIVER TEST CODE FOR IS NOT EMPTY FUNCTION
	if (s.IsNotEmpty())
		cout << "\nObjectIsNotEmptyFunction:OK" << endl;
	else
		cout << "\nErrorInObjectIsNotEmptyfunction" << endl;


	//s.push(ptr);
	//DRIVER TEST CODE FOR ADD FUNCTION
	CNode *ptr2 = new CNode(34);
	if (s.tail)
	{
		s.Add(ptr2);
		s.Add(ptr3);
	}
	if (s.IsEmpty())
		cout << "\nErrorInObjectAddfunction" << endl;
	else
		cout << "\nObjectAddFunction:OK" << endl;
	CNode *p = NULL;

	//DRIVER TEST CODE FOR REMOVE FUNCTION
	if (s.IsEmpty())
		cout << "Stack is Empty" << endl;
	else
		p = s.remove();
	if (!p)
		cout << "\nErrorInObjectRemovefunction" << endl;
	else
		cout << "\nObjectRemoveFunction:OK" << endl;

	//DRIVER TEST CODE FOR PRINT FUNCTION
	if (s.IsEmpty())
	{
		cout << "Stack is empty" << endl;
		cout << "\nErrorInObjectPrintfunction" << endl;
	}
	else
	{
		cout << "\nObjectPrintFunction:OK" << endl;
		s.print();

	}

	//DRIVER TEST CODE COPY CONSTRUCTOR
	CQue s2 = s1;
	if (s2.IsNotEmpty())
		cout << "\nObjectCopyConstructor:OK" << endl;
	else
		cout << "\nErrorInObjectCopyConstructor" << endl;
	s2.print();

	cout << "Before Equal operator" << endl;

	s1.print();
	//DRIVER TEST CODE FOR EQUAL OPERATOR
	bool f = false;
	if (s.IsNotEmpty())
	{
		s1 = s;

		cout << "After Equal operator" << endl;
		s1.print();
		if (s1.remove()->getData() == s.remove()->getData())
			f = true;
	}
	if (f)
		cout << "\nObjectEqualOperator:OK" << endl;
	else
		cout << "\nErrorInObjectEqualOperator" << endl;

	//DRIVER TEST CODE FOR DESTRUCTOR
	s.~CQue();
	if (s.IsEmpty())
		cout << "\nObjectDestructor:OK" << endl;
	else
		cout << "\nErrorInObjectDestructor" << endl;

	system("pause");
	return 0;
}