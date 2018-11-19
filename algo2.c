#include <stdio.h>
#include <math.h>
 long factorial(int);
 int main()
{
	float n=1, fac, b, a, sum=0;
	
	do 																	
	{	
	fac = factorial(n);	
        b = pow (n, 2);
 		a= pow(fac, 2)/pow(2, b);
		if (a<0.0001)
		{
			break;
		}
		printf("n[%i] = %f\n", (int) n, a);
		sum = sum+a;
		n++;
	}
	while(a>0.0001);
	
	{
		
		printf("Result of suming is: %f\n\n", sum);
	}
	
	return 0;
}
 
long factorial(int n)
{
  int c;
  long result = 1;
 
  for (c = 1; c <= n; c++)
    result = result * c;
 
  return result;
}
