#include<iostream>
#include<cmath>
#include<algorithm>
#include<numeric>
#include<cstring>
#include<climits>
#include <unordered_map>
#include<vector>
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

int n;
int m;
int arr[3][3];
int I[3][3];
int f[3][3];


void mul(int mat1[3][3],int mat2[3][3])
{
     // cout<<"BAl"<<endl;
     // pr2d(mat1,3,3);
     // pr2d(mat2,3,3);
    int res[3][3];
    for(int i=0;i<3;i++)
    {    
        // cout<<"Bal"<<endl;
        for(int j=0;j<3;j++)
        {    
            // cout<<"bal"<<endl;
            res[i][j]=0;
            for(int k=0;k<3;k++)

                {
                    // cout<<"Bal"<<endl;

                    //cout<<mat1[i][k]*mat2[k][j]<<endl;

                    res[i][j]+= mat1[i][k]*mat2[k][j];
                }
        }
    }
    
    // pr2d(res,3,3);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            I[i][j]=res[i][j];
        }
    }
}

void matrix_exponent(int pow)
{
    
     while(pow)
     {
        if(pow%2==1)
        {
             mul(I,arr);
             pow--;
        }
        else
        {
            mul(arr,arr);
            pow/=2;
        }
     }

}
void solution()
{  

    int n,m;

    cin>>n>>m;


    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
             if(i==j)
                {
                    I[i][j]=1;
                  
                }
             else 
                {
                    I[i][j]=0;
                    
                }
        }
    }
    // pr2d(arr,n,m);
    // pr2d(I,n,m);
    matrix_exponent(5);

    cout<<"Result is : \n";
    pr2d(I,3,3);




}

signed main()
{  
    
    //FIO();
    s_test();
    

    clock_t sc = clock();

    cin>>t;
   
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
