//Binary Search. Call this function in main() to use.

#include <bits/stdc++.h>
using namespace std;
//num is the number to find in the array. l and r are left most and right most element of array.
int binarySearch(int arr[], int l, int r, int num)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;

		// If the element is in middle already
		if (arr[mid] == num)
			return mid;

		// If element is smaller than x then check left subarray
		if (arr[mid] > num)
			return binarySearch(arr, l, mid - 1, num);

		// Else check the right subarray
		return binarySearch(arr, mid + 1, r, num);
	}

	// If element is not present return -1
	return -1;
}
# Driver Code
arr = [ 2, 3, 4, 10, 40 ]
x = 10
  
# Function call
result = binarySearch(arr, 0, len(arr)-1, x)
  
if result != -1:
    print ("Element is present at index % d" % result)
else:
    print ("Element is not present in array")
