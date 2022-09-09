#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{


   int t;

   cin>>t;
   while(t--)
   {

       int a;

       cin>>a;

       int arr[a];

       int idx=0;

       int mx=-1;
       for(int i=0;i<a;i++)
       {

           cin>>arr[i];

           if(arr[i]>mx)
           {

               mx=arr[i];
               idx=i+1;
           }

       }

       cout<<idx<<endl;
   }

}