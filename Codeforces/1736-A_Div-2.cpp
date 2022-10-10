#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        int b[n];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }


        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        int o=0,z=0;
        int eq=0,f=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])eq++;
            if(a[i]==0)z++;
            if(b[i]==0)z--;
        }
        
        if(eq==n)cout<<0<<endl;
        else if(eq!=n && z==0)cout<<1<<endl;
        else if(eq==n-abs(z)) cout<<abs(z)<<endl;
        else
        {
            cout<<1+abs(z)<<endl;
        }
        
        // else if(abs(o+z)!=0)
        // {
        //     cout<<abs(o+z)<<endl;
        // }
        
    }
}
