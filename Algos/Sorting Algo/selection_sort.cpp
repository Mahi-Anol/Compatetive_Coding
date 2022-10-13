#include<iostream>

using namespace std;

void s_test();
void FIO();

int t=1;

void solution()
{
	int arr[]={1,5,2,7,4,9,4,6,8,1,5};

	int sz=(int)(sizeof(arr)/sizeof(arr[0]));


	for(int i=0;i<sz;i++)
	{
		for(int j=i+1;j<sz;j++)
		{
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);
			}

		}
	}

	for(int i=0;i<sz;i++)
	{
		cout<<arr[i]<<" \n"[sz==i];
	}
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