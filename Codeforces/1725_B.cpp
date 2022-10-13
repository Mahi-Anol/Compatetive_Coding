#include<iostream>
#include<cmath>
using namespace std;

#define pr(x) cout<<x<<endl;
#define pr1(ar,x) for(int i=0;i<x;i++)cout<<ar[i]<<" \n"[i==x-1];
#define pr2(ar,x,y) for(int i=x;i<y;i++)cout<<ar[i]<<" \n"[i==y-1];



void s_test();
void FIO();

int t=1;


void merge(int arr[],int st,int end)
{
	int mid=st+(end-st)/2 ;

	int i=st,j=mid+1;

	int temp[end+1];

	int k=0;

	while(i<=mid && j<=end)

	{
		if(arr[i]>arr[j])
		{
           temp[k++]=arr[j++];
		
		}

		else
		{
			temp[k++]=arr[i++];
		}	
	}

	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}

	while(j<=end)
	{
		temp[k++]=arr[j++];
	}
     int x=0;
	for(int i=st;i<=end;i++)
	{   

		// cout<<i<<" \n"[i==end];
		arr[i]=temp[x++];
	}
}



void merge_sort(int arr[],int st,int end)
{
	int mid=st+(end-st)/2;

	if(st<end)
	{

		merge_sort(arr,st,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,st,end);

	}

	return;
}

void solution()
{
	
	int n,d;
	cin>>n>>d;
     
    int arr[n];

	for(int i=0;i<n;i++)
	{
       cin>>arr[i];
	}

	merge_sort(arr,0,n-1);

	// pr1(arr,n);

	int ret=n;

	int ans=0;

	int mx=n-1;

    
	while(1 && mx>=0)
	{
        
        // pr(ret); 
       
         ret-=(d/(arr[mx]))+1;


         mx--;



         if(ret>=0)
         {
         	ans++;
         }
         else
         {
         	break;
         }
	}

	cout<<ans<<endl;



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
    // freopen("error.txt","w",stderr);
    #endif 
}

void FIO()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}
