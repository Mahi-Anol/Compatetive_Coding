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

	int b,n;
	while(cin>>b>>n)
	{

		if(b==0 && n==0)break;
		int reserved[b+1];

		for(int i=1;i<=b;i++)
		{
			cin>>reserved[i];
		}

		for(int j=1;j<=n;j++)
		{
			int d,c,v;
			cin>>d>>c>>v;

			reserved[d]-=v;
			reserved[c]+=v;
		}

		bool flag=true;


		for(int i=1;i<=b;i++)
		{
			if(reserved[i]<0)
			{
				flag=false;
				break;
			}

		}

		if(flag==false)cout<<"N"<<endl;
		else cout<<"S"<<endl;

	}
   

}

/*-------------------------------------------------------------------------------------------*/
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