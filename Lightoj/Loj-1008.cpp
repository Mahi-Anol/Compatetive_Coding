/*بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ */
//*****ربِّ زِدْنِي عِلْماً*****//
/******************************/
///////Mahi Sarwar Anol/////
/*******************************/
//"We grow through what we go through".
//"Always make a total effort even when the odds are completely against you".
//"What peoples call luck is not luck,it's Allah's will".
//"For what was written for you was written by the greatest writer".
//"Heart endures when eyes does not see".
//"Never lose hope in Allah".
//"No one can defeat you untill you accept your defeat".
//"And remember,nobody's feelings are more important than yours,so take time to love yourself".
//"Think twice code ones."
//"Jab kisi aur ki barbaadi apni jeet jaisi lage ... toh humse zyada barbaad aur koi nahi hai is duniya mein."
//"Manjil unhe milte hein jinke sapno mein jaan hoti hain,pankho se kuch nehi hota,honsla se uran hoti hai."

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>
#include <set>
#include <cassert>
#include <ciso646>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <array>
#include <bitset>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <algorithm>
#include <complex>
#include <functional>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <locale>
#include <numeric>
#include <regex>
#include <string>
#include <utility>
#include <fstream>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <random>
#include <memory>
#include <chrono>
#include<thread>

//#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
using namespace std::chrono;

void s_test();
void FIO();

int t=1;

int kj=1;

void vampi()
{

     long long int num;

     cin>>num;


     long long sr=ceil(sqrt(num));

    ll row=0;
    ll col=0;

    ll lack=0;


     ll forward=sr*sr-num;

     ll backward=num-((sr-1)*(sr-1));

     if(forward<=backward)lack=forward+1;
     else lack=backward;

     //cout<<sr<<" "<<lack<<endl;




     if(sr%2==0)
     {



        row=sr;
      
        col=lack;
        if(lack==backward)
        {
          swap(row,col);
        }
     }
     else
     {
         col=sr;

         row=lack;

         if(lack==backward)
        {
          swap(row,col);
        }
     }
     
     //cout<<"mahi "<<endl;
     cout<<"Case "<<kj++<<": "<<row<<" "<<col<<endl;








}

 
int main() {
 

   //auto start = high_resolution_clock::now();
   FIO();
   s_test();

   cin>>t;
   
   while(t--)
   {
      vampi();
   }

   //auto stop = high_resolution_clock::now();
   //auto duration = duration_cast<microseconds>(stop - start);

   //cout << "Executed in : "<< duration.count() << " microseconds" << endl;
   
   return 0;
}

void s_test()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void FIO()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
}