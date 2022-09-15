#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define ll long long
const int N=1e5+5;
signed main()
{

    int t;

    cin>>t;

    int i=1;
    while(t--)

    {

        int a,b,c;
        cin>>a>>b>>c;

        int aa=a*a;
        int bb=b*b;
        int cc=c*c;
        if(aa==bb+cc ||bb==aa+cc||cc==aa+bb)
        {

            cout<<"Case "<<i++<<": "<<"yes"<<endl;
        }
        else
        {

            cout<<"Case "<<i++<<": "<<"no"<<endl;
        }
    }
    return 0;
}
