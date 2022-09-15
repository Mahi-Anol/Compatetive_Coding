#include <stdio.h>
#include <math.h>
 int main()
 {
     int a;
     scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
      int c,d;
      scanf("%d %d",&c,&d);

      int x=((fabs(d-c)+c)*4)+19;
      printf("Case %d: %d\n",i+1,x);
     
    }

return 0;
 }
