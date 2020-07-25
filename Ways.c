#include<stdio.h>
int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        a[i]=0;
    a[0]=1;
    for(i=1;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            a[j]+=a[j-i];
        }
    }
    printf("%d",a[n]);
}
