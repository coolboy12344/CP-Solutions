#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t ;
    cin>>t;
    
    while(t--)
    {
        ll a, b;
        cin>>a >>b;
        if(a%b != 0)
         cout<<b - a%b <<"\n";
        else
         cout<<"0\n";
    }
    
    return 0;
}
