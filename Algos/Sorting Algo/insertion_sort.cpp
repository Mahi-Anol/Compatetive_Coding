#include<iostream>

using namespace std;

#define pr(x) for(int i=0;i<x;i++)cout<<arr[i]<<" \n"[i==x-1];


void s_test();
void FIO();

int t=1;

void solution()
{
	int arr[]={1,5,2,7,4,9,4,6,8,1,5};

	int sz=(int)(sizeof(arr)/sizeof(arr[0]));
	pr(sz);


	for(int i=1;i<sz;i++)
	{

		int tar=arr[i];

		int j=i-1;

		while(j>=0 && arr[j]>tar)
		{
			arr[j+1]=arr[j];
			j--; 
		}

		arr[j+1]=tar;
	}

	pr(sz);

}
  
signed main()
{  
    
    //FIO();
	s_test();
    

    clock_t sc = clock();

	//cin>>t;
   
	while(t--)
	{
        solution();
	}
	cerr.precision(8);
	cerr<<fixed << "Run Time : " << ((double)(clock() - sc) / CLOCKS_PER_SEC);
}

void s_test()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen("error.txt","w",stderr);
    #endif 
}

void FIO()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}