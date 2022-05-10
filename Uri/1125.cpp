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
   int g,p;

   while(cin>>g>>p)
   {
   		if(g==0 && p==0)break;

   		int arr[g+1][p+1];
   		memset(arr,0,sizeof(arr));
   		for(int i=1;i<g+1;i++)
   		{
             for(int j=1;j<p+1;j++)
             {
             	cin>>arr[i][j];
             }
   		}
   		int s;
   		cin>>s;
   		int res[p+1]={0};
   		for(int i=1;i<s+1;i++)
   		{
   			int k;
   			cin>>k;
            
            int sc[p+1]={0};
   			for(int x=1;x<k+1;x++)
   			{
   				cin>>sc[x];
   			}

   			for(int w=1;w<g+1;w++)
   			{
	            for(int q=1;q<p+1;q++)
	            {
	            	res[q]+=sc[arr[w][q]];
	            }	            
   			}

   		   int ans=0;
           for(int w=1;w<p+1;w++)
           {
           	  if(res[w]>ans)ans=res[w];
           }


           int count=0;

           for(int w=1;w<p+1;w++)
           {
           	   if(res[w]==ans)count++;
           }
           

           //cout<<"Value of count is "<<count<<endl;


           for(int w=1;w<p+1;w++)
           {
           	   if(res[w]==ans)
           	   	{
           	   		--count;
           	   		if(count==0)cout<<w;
           	   		else cout<<w<<" ";
           	   	}
           }

           cout<<endl;
           memset(res,0,sizeof(res));


   		}

   		
   }
}

 
int main() {
 
   FIO();
   //s_test();
    
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