#include <iostream>
#include<cmath>
#include<string.h>
using namespace std;

int main()
{

    int arr[164000];

    memset(arr,0,sizeof(arr));

    int prime[164000];

    int x=0;

    for(int i=2;i*i<=164000;i++)
    {
        if(arr[i]==0)
        {

            for(int j=i*i;j<=164000;j+=i)
            {
                arr[j]=1;

            }
        }
    }



    for(int i=2;i<=164000;i++)
    {

        if(arr[i]==0)
        {

            //cout<<i<<endl;
            prime[x++]=i;
        }
    }



    int t;

    cin>>t;


    while(t--)
    {
        int n;

        cin>>n;

        cout<<prime[n-1]<<endl;

    }

    return 0;
}
