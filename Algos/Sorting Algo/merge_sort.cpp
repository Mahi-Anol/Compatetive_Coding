#include<iostream>

using namespace std;

#define pr1(ar,x) for(int i=0;i<x;i++)cout<<ar[i]<<" \n"[i==x-1];
#define pr2(ar,x,y) for(int i=x;i<y;i++)cout<<ar[i]<<" \n"[i==y-1];


void s_test();
void FIO();

int t=1;

void merge(int arr[],int st,int end)
{
      int mid=st+(end-st)/2;
       
      int temp[end+1];

      int i=st,j=mid+1,k=0;

      while(i<=mid && j<=end)
      {
      	   if(arr[i]>arr[j])
      	   {
      	   	  temp[k++]=arr[j];
      	   	  j++;
      	   }
      	   else
      	   {
      	   	 temp[k++]=arr[i];
      	   	 i++;
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
	
	int sz;
	cin>>sz;

	int st=100;

	int end=10;

	int arr[sz];

    
	for(int i=0;i<sz;i++)
	{
         arr[i]=end;
         arr[i+1]=st;

         st++;
         end++;
         i+=1;
	}

	pr1(arr,sz);

	cout<<"----"<<endl;

	merge_sort(arr,0,sz-1);

	pr1(arr,sz);

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
