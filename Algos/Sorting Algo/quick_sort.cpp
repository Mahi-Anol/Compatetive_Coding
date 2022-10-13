#include<iostream>
#include<cmath>
#include<algorithm>
#include<numeric>
using namespace std;

#define ull unsigned long long int
#define ll long long int
#define pr(x) cout<<x<<endl;
#define pr1(ar) for(int i=0;i<(int)(sizeof(arr)/sizeof(arr[0]));i++)cout<<ar[i]<<" \n"[i==(int)(sizeof(arr)/sizeof(arr[0]))-1];
#define pr2(ar,x,y) for(int i=x;i<y;i++)cout<<ar[i]<<" \n"[i==y-1];
#define pr2d(arr,x,y) for(int i=0;i<x;i++)for(int j=0;j<y;j++)cout<<arr[i][j]<<" \n"[j==y-1];



void s_test();
void FIO();

int t=1;


int partition_swap(int arr[],int s,int e)
{
    int pv=arr[e];

    int i=s-1;

    for(int j=s;j<=e-1;j++)
    {
         if(arr[j]<=pv)
         {
            i++;
            swap(arr[i],arr[j]);
         }    
     }

     swap(arr[i+1],arr[e]);

     return (i+1);
}

int partition(int arr[],int s,int e)
{
    srand(time(NULL));
     
    int random=s+rand()%(e-s);
    // cout<<random<<endl;

    swap(arr[random],arr[e]);

    return partition_swap(arr,s,e);

}


void quick_sort(int arr[],int s,int e)
{


    if(s<e)
    {
        int pv=partition(arr,s,e);
        quick_sort(arr,s,pv-1);
        quick_sort(arr,pv+1,e);
    }

    return;

}


void solution()
{

    int n;

    cin>>n;

    int arr[n];

    int st=11;
    int end=69;

    for(int i=0;i<n;i++)
    {

        arr[i]=st++;
        arr[i+1]=end++;

        i++;
    }

    pr1(arr);

    quick_sort(arr,0,n-1);
    
    cout<<"-------"<<endl;
    pr1(arr);

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
