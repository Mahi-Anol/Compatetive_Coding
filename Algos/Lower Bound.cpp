#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,2,2,3,5,6,6,7,8};

    int lo=0;
    int hi=((int)(sizeof(arr)/sizeof(arr[0])))-1;
    
    int tar;

    cout<<"Enter Target : ";
    cin>>tar;
    
     int mid=-1;

     //cout<<"VAlue of hi and lo = "<<lo<<" "<<hi<<endl;

    while(lo<hi)
    {

        mid=lo+(hi-lo)/2;

        //cout<<"VAlue of lo ,mid,hi = "<<lo<<" "<<mid<<" "<<hi<<" "<<arr[mid]<<endl;
        //if(hi-lo==1)break;
        if(arr[mid]>=tar)
        {
            hi=mid;
        }
        else
        {
            lo=mid+1;
        }


    }
    
    if(arr[lo]>=tar)cout<<hi<<endl;
    else if(arr[hi]>=tar)cout<<hi<<endl;
    else cout<<-1<<endl;


}