// *************** BINARY SEARCH ***************

#include<iostream>
using namespace std;
int binarySearch(int arr[], int num, int low, int high)
{
	int mid;
	if (low > high)
	{
		return -1;									// If low is greater than high it returns -1
	}
	mid = (low + high) / 2;
	if (num == arr[mid])									// If the number and mid element of array are same 
	{											// it returns mid index.
		return mid;
	}
	if (num < arr[mid])									// If the number is less than mid element than high 
	{											// is set at mid.
		return binarySearch(arr, num, low, mid - 1);
	}
	else
	{											// If the number is greater than mid element than low 
		return binarySearch(arr, num, mid + 1, high);		// is set at mid
	}
}

/* Driver Code */
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int num = 3;
	int result = binarySearch(arr, num, 0, n-1);
	if (result == -1)
		cout << "\nElement is not present in array." << endl;
	else
		cout << "\nElement found is at [" << result << "]: " << arr[result] << endl;
	cout << endl;
	system("pause");
	return 0;
}
