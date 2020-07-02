#include<stdio.h>
#define M 10000
int main()
{
    int i,a[100],n,sum,k;
    int m[M]={0};
    scanf("%d %d",&n,&sum);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        k=sum-a[i];
        if(m[k]==1)
            printf("pair to get sum %d is %d and %d\n",sum,k,a[i]);
        m[a[i]]=1;
    }
}
