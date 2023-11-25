#include <stdio.h>
#include <math.h>
int main()
{
   int a[4],b[4],c[4];
   max_gst();
}
int max_gst()
{
   int a[4]={1100,900,200,100};
   int b[4]={18,12,28,0};
   int c[4]={1,4,3,2};
   int j=1;
   int gst[4];
   for(int i=0;i<=3;i++)
    { 
        gst[j]=(b[i]/1000)*a[i];
       printf("%d ",gst[j]);
       j++;
    }
    printf{"the maximum gst is %d ",Math.max(gst)};
}
int total_amount()
{
    
}