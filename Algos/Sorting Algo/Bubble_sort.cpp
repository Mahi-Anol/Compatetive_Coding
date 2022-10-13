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
		cout<<arr[i]<<" \n"[i==sz];
	}

	for(int i=0;i<sz;i++)
	{
		int flag=0;
         for(int j=0;j<sz-i-1;j++)
         {
              if(arr[j]>arr[j+1])
              	{
              		swap(arr[j],arr[j+1]);
              		flag=1;
              	}
         }
         if(!flag)break;
	}

	for(int i=0;i<sz;i++)
	{
		cout<<arr[i]<<" \n"[i==sz];
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