
#include<iostream>
#include<string>
#include<stack>
#include "Node.cpp"
using namespace std;
class CStack
{
protected:
	char ex;
	Node *top;
public:
	CStack() :top(NULL), ex('0')						// DEFAULT NULL CONSTRUCTOR
	{

	}

	CStack(Node*ptr)									// PARAMETERIZED CONSTRUCTOR
	{
		top = ptr;
		top->next = NULL;
		ptr = NULL;
	}

	char ctop()											// FUNCTION FOR TOP
	{
		return ex;
	}

	bool isNotEmpty()const								// FUNCTION TO CHECK IF STACK IS NOT EMPTY
	{
		if (top)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isEmpty()const									// FUNCTION TO CHECK IF STACK IS EMPTY
	{
		if (top)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	CStack *push(Node*& ptr)							// FUNCTION TO PUSH VALUES IN STACK
	{
		if (isNotEmpty())
		{
			ptr->next = top;
			top = ptr;
			ptr = NULL;
		}
		if (isEmpty())
		{
			top = ptr;
			ptr->next = NULL;
			ptr = NULL;
		}
		return this;
	}
	Node *pop()											// FUNCTION TO POP VALUES FROM STACK
	{
		Node*ptr = top;
		if (isEmpty())
		{
			cout << "Your stack is EMPTY!" << endl;
		}
		if (isNotEmpty())
		{
			cout << "Stack ready to POP!" << endl;
			top = top->next;
			ptr->next = NULL;
		}
		return ptr;
	}

	bool Operand(char C)								// Function to verify whether a character is english letter or numeric digit.
	{													// We are assuming in this solution that operand will be a single character
		if (C >= '0' && C <= '9')
			return true;
		if (C >= 'a' && C <= 'z')
			return true;
		if (C >= 'A' && C <= 'Z')
			return true;

		return false;
	}

	void print()const									// FUNCTION TO PRINT MESSAGE IF STACH IS EMPTY OR NOT
	{
		if (!top)
		{
			cout << "Your stack is EMPTY!" << endl;
		}
		else
		{
			Node *ptr = top;
			while (ptr)
			{
				ptr->print();
				ptr = ptr->next;
			}
		}
	}

	
	bool Operator(char C)								// Function to verify whether a character is operator symbol or not.
	{
		if (C == '+' || C == '-' || C == '*' || C == '/' || C == '$')
			return true;

		return false;
	}

	int OpPre(char op)									// Function to get weight of an operator. An operator with higher weight 
	{													// will have higher precedence.
		int weight = -1;

		switch (op)
		{
		case '+':
		
		case '-':
			weight = 1;
		case '*':
		
		case '/':
			weight = 2;
		case '$':
			weight = 3;
		}
		return weight;
	}

	int H_Precedence(char op1, char op2)		// Function to perform an operation and return output.
	{
		int op1Weight = OpPre(op1);
		int op2Weight = OpPre(op2);

		
		return op1Weight > op2Weight ? true : false;
	}

	int post(string s)								//EVALUATING POSTFIX EXPRESSION
	{
		CStack pt;
		int res = 0;
		int ans = 0;
		size_t len = s.length();

		for (int x = 0; x < len; ++x)
		{
			if (s[x] >= '0' && s[x] <= '9')
			{
				if (!(s[x] == 32))
				{
					int z = s[x] - 48;
					Node *q = new Node(z);
					pt.push(q);
				}
			}
			else
			{
				Node *op2 = pt.pop();
				Node *op1 = pt.pop();

				switch (s[x])
				{
				case 42:
					ans = op1->getValue()*op2->getValue();

					break;
				case 43:
					ans = op1->getValue() + op2->getValue();

					break;
				case 45:
					ans = op1->getValue() - op2->getValue();

					break;
				case 47:
					ans = op1->getValue() / op2->getValue();
					break;
				default:
					cout << "THIS CHARACTER IS INVALID" << endl;

					break;
				}

				Node *q2 = new Node(ans);
				pt.push(q2);
			}

		}
		return ans;
	}
	

	string InToPost(string str)			// Conversion from infix to postfix using string
	{
																																									stack<char> S;
		string postfix = "";							// Initialize postfix as empty string.

		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] == ' ' || str[i] == ',')			// Scanning each character from left.
				continue;

			else if (Operator(str[i]))
			{
				while (!S.empty() && S.top() != '(' && H_Precedence(S.top(), str[i]))
				{
					postfix += S.top();
					S.pop();
				}
				int at = str[i] - '+';
				Node *ptr = new Node(at);
				S.push(str[i]);
			}
			
			else if (Operand(str[i]))				// Else if character is an operand
			{
				postfix += str[i];
			}

			else if (str[i] == '(')
			{
				S.push(str[i]);
			}

			else if (str[i] == ')')
			{
				while (!S.empty() && S.top() != '(') {
					postfix += S.top();
					S.pop();
				}
				S.pop();
			}
		}

		while (!S.empty()) 
		{
			postfix += S.top();
			S.pop();
		}

		return postfix;
	}

	
};

