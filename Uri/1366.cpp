/*بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ */
//*****ربِّ زِدْنِي عِلْماً*****//
/******************************/
///////Mahi Sarwar Anol/////
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



bool cmp(pair<int,int> a, pair<int,int> b)
{
    return (a.second < b.second);
}
  
void vampi()
{ 


      int n;

      int res=0;

      int count=0;
      while(cin>>n,n)
      {
         
         vector<pair<int,int>> vec;


         for(int i=0;i<n;i++)
         {
               int a,b;
               cin>>a>>b;

               vec.push_back(make_pair(a,b));
         }



         // for (int i=0; i<n; i++)
         //  {
        
         //    cout << vec[i].first << " "<< vec[i].second << endl;
         // }



         sort(vec.begin(),vec.end(),cmp);

         // cout<<"After Sorting "<<endl;

         //  for (int i=0; i<n; i++)
         //  {
        
         //    cout << vec[i].first << " "<< vec[i].second << endl;
         // }


          
          for(int i=0;i<n;i++)
          {

               if(vec[i].second>=2&&vec[i].second<4)
               {
                  res+=2;
               }

               else if(vec[i].second>=4)
               {
                  count+=(vec[i].second)/4;

                  if(((vec[i].second)%4)>=2)
                  {
                        res+=2;
                  }

               }
          }


          int extra=res/4;

          cout<<count+extra<<endl;

          count=0;
          res=0;




      } 
}

 
int main() {
 
   FIO();
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