#include <stdio.h>
#include <math.h>
 
long factorial(int n);
int main()
{
    float y,z, x;
    float sum=0,sum2=0,n=1, a, b, d;
    for(x=0.1; x<=1; x +=0.09)
    {
        d=pow(x,2);
        y=(((1+d)/2)*atan(x))-(x/2);
        for(n=0;n<=30;n++)
        {
            z=n+1;
            d=2*n+1;
            b=pow(-1, z);
            a= b*(((pow(x, d))/(4*pow(n, 2)-1)));
            sum2=sum2+a;
        }
               n=0;
        do
        {
           z=n+1;
            d=2*n+1;
            b=pow(-1, z);
            a= b*(((pow(x, d))/(4*pow(n, 2)-1)));
            sum=sum+a;
            n++;
        }
        while(a>0.0001);
       
    printf("x=%f    y=%f    sum=%f    sum2=%f\n",x, y, sum, sum2);
    sum=0 , sum2=0, n=1;          
   }     
return 0;
}
