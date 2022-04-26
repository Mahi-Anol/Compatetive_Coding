/*بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ */
//*****ربِّ زِدْنِي عِلْماً*****//
/******************************/
///////Mahi Sarwar Anol//////
/*******************************/
//"We grow through what we go through".
//"Always make a total effort even when the odds are completely against you".
//"What peoples call luck is not luck,it's Allah's will".
//"For what was written for you was written by the greatest writer".
//"Heart endures when eyes does not see".
//"Never lose hope in Allah".
//"No one can defeat you untill you accept your defeat".
//"And remember,nobody's feelings are more important than yours,so take time to love yourself".
//"Think twice code ones."
//"Jab kisi aur ki barbaadi apni jeet jaisi lage ... toh humse zyada barbaad aur koi nahi hai is duniya mein."
//"Manjil unhe milte hein jinke sapno mein jaan hoti hain,pankho se kuch nehi hota,honsla se uran hoti hai."
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;

void s_test();
void FIO();
/*------------------------------------------🤜🤛--------------------------------------------*/ 

bool compare(int a,int b)
{
   return (a>b);
}
void vampi()
{
	int N,g;
	while(cin>>N>>g)
	{
      
      // cout<<"Number of matches = "<<N<<" Number of goals = "<<g<<endl;
      int s,r;

      int point=0;
      

      //int h=N;
      vector<int> a;

      for(int i=0;i<N;i++)
      {
         //cout<<" value of h = "<<i<<endl;
         cin>>s>>r;
         if(s>r)point+=3;
         else
         {
            a.push_back(s-r);
         }

      }

      // for(int i=N-1;i>=0;i--)
      // {
      //     cout<<"S = "<<s[i]<<" R = "<<r[i]<<endl;
      // }

      // for(int i=0;i<(int)a.size();i++)
      // {
      //    cout<<"a["<<i<<"] = "<<a[i]<<endl;
      // }

      //cout<<"POint now = "<<point<<endl;


      sort(a.begin(),a.end(),compare);

      // for(int i=0;i<(int)a.size();i++)
      // {
      //    cout<<"a["<<i<<"] = "<<a[i]<<endl;
      // }

      for(int i=0;i<(int)a.size();i++)
      {


         //cout<<"remainng G ="<<g<<endl;

         if(a[i]==0 && g>0)
         {
            point+=3;
            g--;
         }
         else if(a[i]==0 && g==0)
         {
            point+=1;
         }
         else if(a[i]<0 && g+a[i]>0)
            {
               point+=3;
               g+=a[i]-1;
            }
         else if(a[i]<0 && g+a[i]==0)
         {

            point+=1;
            g+=a[i];
         }


      }

      cout<<point<<endl;


	}
   

}

/*-------------------------------------------------------------------------------------------*/
int main() {
 
   //FIO();
   s_test();
    
   int t=1;
   //cin>>t;
   while(t--)
   {
      vampi();
   }
   
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