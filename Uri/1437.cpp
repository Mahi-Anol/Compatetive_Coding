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
   while(cin>>n)
   {

      if(n==0)break;
      string a;

      cin>>a; //e for left,d for right //N,L,S,o--N,e,s,w;
      


      int count=1;

      for(int i=0;i<(int)a.size();i++)
      {
         if(a[i]=='E')count-=1;
         else if(a[i]=='D')count+=1;
      }


      //cout<<count<<endl;

      if(count>=1 && count<=4)
      {
         if(count==1)cout<<"N"<<endl;
         else if(count==2)cout<<"L"<<endl;
         else if(count==3)cout<<"S"<<endl;
         else if(count ==4)cout<<"O"<<endl;
      }

      if(count>4)
      {
         if((count%4)==1)cout<<"N"<<endl;
         else if((count%4)==2)cout<<"L"<<endl;
         else if((count%4)==3)cout<<"S"<<endl;
         else if((count%4)==4)cout<<"O"<<endl;
      }


      if(count<=0&&count>=-3)
      {
         if(count==0)cout<<"O"<<endl;
         else if(count==-1)cout<<"S"<<endl;
         else if(count==-2)cout<<"L"<<endl;

         else if(count==-3)cout<<"N"<<endl;
      }

      if(count<-3)
      {
         if((count%4)==-1)cout<<"S"<<endl;
         else if((count%4)==-2)cout<<"L"<<endl;
         else if((count%4)==-3)cout<<"N"<<endl;
         else if((count%4)==0)cout<<"O"<<endl;

      }

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