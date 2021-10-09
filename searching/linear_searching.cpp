#include <bits/stdc++.h>
using namespace std;

int lin_search(int a[],int n,int k)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i]==k)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[]={1,121,4,144,9,169,16,196,25,225,36,256,49,289,64,324,81,361,100,400};
	int val,k;

	// Case 1 - Element present in the array
	k=36;
	val=lin_search(a,sizeof(a)/sizeof(a[0]),k);
	if (val!=-1)	
		cout<<k<<" found at index "<<val<<".\n";
	else
		cout<<k<<" not found in the array.\n";

	// Case 2 - Element not present in the array
	k=69;
	val=lin_search(a,sizeof(a)/sizeof(a[0]),k);
	if (val!=-1)	
		cout<<k<<" found at index "<<val<<".\n";
	else
		cout<<k<<" not found in the array.\n";
	return 0;
}