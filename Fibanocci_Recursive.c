#include<stdio.h>
int fibo(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
    }



int main()
{
 int i,n;
 scanf("%d",&n);
 printf("Fibanocci of %d is %d",n,fibo(n));
}
