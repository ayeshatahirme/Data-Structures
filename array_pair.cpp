#include<iostream>
using namespace std;

void print_all_pairs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        for(int j=i+1;j<n;j++)
        {
            int y=arr[j];
            cout<<x<<","<<y<<endl;
        }
    cout<<endl;
    }
}

int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);

    print_all_pairs(arr,n);
    return 0;
}