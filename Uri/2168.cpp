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

  
void vampi()
{ 

         

   int n;
   cin>>n;

   int arr[n+1][n+1];

   for(int i=0;i<n+1;i++)
   {

      for(int j=0;j<n+1;j++)
      {
          cin>>arr[i][j];
      }

   }

   //cout<<"Printing array"<<endl;

   // for(int i=0;i<n+1;i++)
   // {

   //    for(int j=0;j<n+1;j++)
   //    {
   //        cout<<arr[i][j]<<" ";
   //    }
   //    cout<<endl;

   // }

   //cout<<"Result"<<endl;

   
   for(int k=0;k<n;k++)
   {

        string s="";
      
        for(int l=0;l<n;l++)
        {

               int count=0;
              for(int i=k;i<k+2;i++)
               {
                  for(int j=l;j<l+2;j++)
                  {

                     if(arr[i][j]==1)count+=1;

                     //cout<<"row = "<<i<<" col = "<<j<<endl;

                  }

                  //cout<<endl;
               }
                   

                   //cout<<" Block \n";
                if(count>=2)s+="S";
                else s+="U";

               count=0;
         }

         
         cout<<s<<endl;

         //count=0;
         s="";

         //cout<<endl;
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