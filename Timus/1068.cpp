#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>0)
    {
        cout<<n*(n+1)/2<<endl;
    }

    else if(n<0)
    {
        n*=-1;
        cout<<((n*(n+1)/2)*(-1))+1<<endl;
    }
    else
    {

        cout<<1<<endl;
    }

    return 0;

}
