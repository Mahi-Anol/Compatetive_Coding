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

   int arr[6];

   for(int i=0;i<6;i++)
   {
      cin>>arr[i];
   }

   bool s=true;

   bool l=true;

   for(int i=0;i<6;i++)
   {
      for(int j=0;j<6;j++)
      {
         if(i==j)continue;
         if(arr[i]==arr[j])s=false;
         if(arr[i]<1 || arr[i]>6)l=false;

      }
   }

   if(s && l)
   {
      if(arr[0]+arr[5]==7 && arr[1]+arr[3]==7 && arr[2]+arr[4]==7)
      {
         cout<<"SIM"<<endl;
      }
      else cout<<"NAO"<<endl;
   }

   else cout<<"NAO"<<endl;





}

 
int main() {
 
   FIO();
   s_test();
    
   int t=1;
   cin>>t;
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