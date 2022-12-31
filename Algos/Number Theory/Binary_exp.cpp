#include<iostream>
using namespace std;
#define mod 1000000007;
namespace mahi{
    long long pow(long long x,long long p)//Receives integer as input
    {
         long long result=1;
         while(p)
         {
             if(p&1)
             {
                 result=(result*x)%mod;
                 p--;
             }
             else
             {
                x=(x*x)%mod;
                p>>=1;
             }
         }
         return result;
    }
}
int main()
{
    cout<<mahi::pow(10,2)<<endl;

    using namespace mahi;

    cout<<pow(3,4)<<endl;

    return 0;
}
