/*بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ */
//*****ربِّ زِدْنِي عِلْماً*****//
/******************************/
///////Mahi Sarwar Anol///////
/*******************************/
#include<bits/stdc++.h>
using namespace std;
// #ifndef ONLINE_JUDGE
//    #include "mahi/debug.h"
// #endif
#define ull unsigned long long
typedef long long int ll;
#define t_digit(x) (int)log10((double)x)+1
#define endl "\n"
using pi = pair<int,int>;
#define mp make_pair
#define f first
#define s second
using vi = vector<int>;
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define pb push_back
#define endl "\n"
#define mod 1000000007;//10^9+7;

void s_test();
void FIO();
int t = 1;

int tc=t;
bool cmp(int a,int b)
{
   return a>b;
}

void solution()
{
   ll x,y;
   cin>>x>>y;

   ll p=y%4;
   ll o=(y-p);
   if(p==0)cout<<x<<endl;
   else
   {

      if(!(x&1))
      {
         ll h1=x-(o+1);
         ll h2=h1+o+2;
         ll h3=h2+o+3;
         if(p==1)cout<<h1<<endl;
         else if(p==2)cout<<h2<<endl;
         else
            {
               cout<<h3<<endl;
            }
      }
      else
      {
         ll h1=x+o+1;
         ll h2=h1-(o+2);
         ll h3=h2-(o+3);
         if(p==1)cout<<h1<<endl;
         else if(p==2)cout<<h2<<endl;
         else
         {
            cout<<h3<<endl;
         }

            
      }
   }
}


signed main()
{
   
   // clock_t sc = clock();
   FIO();   
   s_test();

   cin >> t;

   while (t--)
   {
      solution();
   }
   cerr.precision(8);
   // cerr << fixed << "Run Time : " << ((double)(clock() - sc) / CLOCKS_PER_SEC);
}

void FIO()
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
}

void s_test()
{
   #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   // freopen("error.txt","w",stderr);
   #endif
}
