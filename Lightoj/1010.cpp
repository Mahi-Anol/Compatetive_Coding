#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ll long long
const int N=1e5+5;
signed main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    int i=1;
    while(t--)
    {
        int n,m;

        cin>>n>>m;

        if(n==1 || m==1)
        {

            cout<<"Case "<<i<<": "<<max(n,m)<<endl;
        }

        else if(n==2 || m==2)
        {

            cout<<"Case "<<i<<": "<<(((n*m)/8)*4)+(((n*m)%8)>=4?4:(n*m)%8)<<endl;

        }

        else
        {

            cout<<"Case "<<i<<": "<<((n*m)+1)/2<<endl;

        }
        i++;
    }
    return 0;
}
