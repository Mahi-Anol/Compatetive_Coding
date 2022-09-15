#include <iostream>
#include<cmath>
#include<string.h>
using namespace std;

int main()
{

    long long int t;
    cin>>t;

    while(t--)
    {

        long long int n;

        cin>>n;


       long long c= (-1+sqrt(double(8*n-7)))/2.0;

       if(n==(c*(c+1)/2)+1)
       {
           cout<<1<<" ";
       }

       else
       {
           cout<<0<<" ";

       }


    }
    return 0;
}
