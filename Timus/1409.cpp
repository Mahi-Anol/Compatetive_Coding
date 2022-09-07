
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

int t=1;


int cmp(int a,int b)
{
	return a>b;
}  
void vampi()
{


	int n;
	cin>>n;
	int arr[n];


	int count=0;

	bool chk[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];

		chk[i]=true;
	}



	//int arr2[n];


	//memset(chk,false,sizeof(chk));


	for(int i=0;i<n;i++)
	{

		for(int j=0;j<n;j++)

		{
			
				if(i<j && arr[i]==arr[j] && chk[i]==true)
				{

					for(int k=0;k<n;k++)
					{
						
						if(i<j && arr[i]!=arr[k] && chk[i]==true)
						{
							chk[i]=false;
							chk[k]=false;
							break;
						}

					}
					break;
				}
			
		}

	}


	for(int i=0;i<n;i++)

	{
		if(chk[i]==true)count++;
	}

	cout<<count<<endl;
	
}

 
int main() {
 
   //FIO();
   s_test();

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