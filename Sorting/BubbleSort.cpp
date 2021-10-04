// *************** BUBBLE SORT ***************

#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = 0; j < size - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
		
	}
}
void print(int arr[], int size)
{
	cout << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	int arr[] = { 64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Unsorted array: ";
	print(arr, n);
	cout << endl;
	bubbleSort(arr, n);
	cout << "Sorted array: ";
	print(arr, n);

	system("pause");
	return 0;
}
