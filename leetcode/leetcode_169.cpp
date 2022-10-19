#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;
	int p;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}

          int maj=-1;
             int cnt=0;

	      for(auto i=a.begin();i!=a.end();i++)
         {
             if(cnt==0)
             {
                 maj=*i;
             }
             if(*i==maj)cnt++;
             else cnt--;
         }

         cout<<maj<<endl;


	return 0;
}