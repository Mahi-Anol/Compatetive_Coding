#include<iostream>
#include<cmath>
using namespace std;

#define pi 2*acos(0.0)


int main()
{
    int t;
    cin>>t;

    int i=1;

    while(t--)
    {

        double r;
        cin>>r;

        double g=(2*r)*(2*r);

        double c=pi*r*r;

        cout.precision(2);
        cout<<fixed<<"Case "<<i++<<": "<<g-c<<endl;
    }
    return 0;

}
