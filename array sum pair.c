#include<stdio.h>
int main()
{
    int i,j,n,a[100],k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(a[i]+a[j]==k)
            printf("pair to get sum %d is %d and %d ",k,a[i],a[j]);
        }
    }

}
