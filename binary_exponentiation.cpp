// Used to calculate a^n in O(logn)

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll bin_exp(ll a, ll n)
{
    ll val=1;
    while(n)
    {
        if (n%2)
        {
            val*=a;
        }
        a*=a;
        n=n/2;
    }
    return val;
}

int main()
{
    ll a,n;
    cin>>a>>n;
    cout<<bin_exp(a,n);
}