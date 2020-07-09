#include<stdio.h>
int fib(int n)
{
    int f[n],i;
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    return f[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Fibanocci of % d is: %d",n,fib(n));
}
