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
void vampi()
{
   int x=3;
   int sum=0;
   //cout<<"Mahi"<<endl;
      
      
   string a;
   while(x--)
   {
      //cout<<"Mahi"<<endl;

      while(1)
      {
            getline(cin,a);
            if(a[0]=='c')
            {
               sum+=0;
               break;
            }
            else{

               int p=(int)a.size()-1;
               for(int i=(int)a.size()-1;i>=0;i--)//treversignfrom opposite
               {
                  if(a[i]=='*')
                  {

                     int l=p-i;
                     sum+=pow(2,l);
                  }
                  //cout<<"Sum for "<<i<<" is "<<sum<<endl;

                  //cout<<"RightNow Sum is = "<<sum<<endl;
               }
            }
      }
      //cout<<a<<endl;
      //cout<<"X = "<<x<< " "<<endl;
      cout<<sum<<endl;
      sum=0;

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