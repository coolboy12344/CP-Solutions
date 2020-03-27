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
        ll n;
        string c;
        cin>>n >>c;
        
        string a;
        string b;
        
        a += '1';
        b += '1';
        
        int greater = 0 ;
        
        for(ll i=1;i<n;i++)
        {
            if(c[i] == '0')
            {
                a += '0';
                b += '0';
            }
            if(c[i] == '1')
            {
                if(greater == 0)
                {
                    a += '1';
                    b += '0';
                    greater = 1;
                }
                else if(greater == 1)
                {
                    a += '0';
                    b += '1';
                }
                /*else if(greater == 2)
                {
                    a += '1';
                    b += '0';
                }*/
            }
            if(c[i] == '2')
            {
                if(greater == 0)
                {
                    a += '1';
                    b += '1';
                }
                else if(greater == 1)
                {
                    a += '0';
                    b += '2';
                }
                /*else if(greater == 2)
                {
                    a += '2';
                    b += '0';
                }*/
            }
        }
        
        cout <<  a << "\n" << b << "\n" ;
        
    }
    
    return 0;
}
