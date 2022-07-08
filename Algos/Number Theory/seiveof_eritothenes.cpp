#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;

using namespace std::chrono;
using namespace std;

void s_test();
void FIO();

int t=1;



void seive_e(int n)//you may need ll or ull
{
    bool prime[n+1];

    memset(prime,true,sizeof(prime));


    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }


    for(int i=2;i<=n;i++)

    {
        if(prime[i])cout<<i<<" ";
    }


    cout<<endl;

    //return;
}


  
void vampi()
{ 

   int n;

   cin>>n;

   seive_e(n);
   
}

 
int main() {
 
   //FIO();
   //s_test();

   //cin>>t;

   auto start = high_resolution_clock::now();
   
   while(t--)
   {
      vampi();
   }

   auto stop =high_resolution_clock::now();

   auto duration =duration_cast<microseconds>(stop - start);
   
   //cout << "Time taken to run : "<< duration.count() << " microseconds" << endl;
   
   return 0;
}

void s_test()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void FIO()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}
