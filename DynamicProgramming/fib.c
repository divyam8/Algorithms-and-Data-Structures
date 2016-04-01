#include<stdio.h>

int main(int argc, char const *argv[])
{
   int n,a=0,b=1,sum,i;	
   printf("Enter the no\n");
   scanf("%d",&n);
  
   for(i=0;i<n;i++)
   {
   	 sum=a+b;
   	 a=b;
   	 b=sum;
   }

   printf("Fibonacci Number:%d",sum);

   return 0;
}	

