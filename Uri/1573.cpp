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

  
int lc(string b,int len,int year)
{

      long long  l=0;

      for(int i=0;i<len;i++)
      {
         //cout<<"DIgits = "<<b[i]-'0'<<endl;
         //cout<<"Numebr = "<<l*10+(b[i]-'0')<<endl;
         l=( l*10 + (b[i]-'0') )%year;


        //cout<<"Total = "<<l<<endl;
      }
      
      //cout<<"FInish"<<endl;

      //cout<<"Result = "<<l<<endl;
      if(l==0)return 0;
      else return 1;
	
}
void vampi()
{ 
     string a;

     int g=0;

     while(cin>>a)
     {
      //lc(a,a.size(),400);

      if(g>0)cout<<endl;
      g++;

        bool leap=false;
        bool k=false;
     	int len=a.size();

      //   cout<<a<<endl;
        if( (lc(a,len,4)==0 && lc(a,len,100) !=0 )|| lc(a,len,400)==0 ){

            cout<<"This is leap year."<<endl;
            leap=true;
            k=true; 
        }

        // if( (lc(a,len,4)==0 && lc(a,len,100) !=0 )|| lc(a,len,400)==0 ){
        //      printf("This is leap year.\n");
        //      k=1;
        //      leap=1;
        //  }

        if(lc(a,a.size(),15)==0)
        {
            cout<<"This is huluculu festival year."<<endl;
            k=true;
        }



         if(lc(a,a.size(),55)==0 && leap==true)
         {
            cout<<"This is bulukulu festival year."<<endl;
         }

        if(k==false)
        {
            cout<<"This is an ordinary year."<<endl;
        }

     }
}

 
int main() {
 
   //FIO();
   s_test();
    
   int t=1;
  // cin>>t;
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