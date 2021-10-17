#include<iostream>
#include"stack.cpp"
using namespace std;
int main()
{
	Node *ptr1 = new Node(10);
	Node *ptr2 = new Node(20);
	Node *ptr3 = new Node(30);
	Node *ptr4 = new Node(40);

	CStack myStack;
	myStack.pop();
	myStack.push(ptr1);
	myStack.push(ptr2);
	myStack.push(ptr3);
	cout << endl;
	Node *s = myStack.pop();
	cout << s->getValue();
	cout << endl;
	cout << "Printing stack: " << endl;
	myStack.print();
	
	int a = myStack.post("456+-");
	cout << "\nThe output of your passed post fix string is: " << a << endl;
	
	
	string expression;
	cout << "\nEnter Infix Expression \n";
	getline(cin, expression);

	cout << "\nOutput in postfix is: " << myStack.InToPost(expression) << endl;
	
	system("pause");
	return 0;
}