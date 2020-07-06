#include<stdio.h>
int main()
{
    int i,n,a[100],c=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
             if(max<a[i])
                    max=a[i];
            c+=max-a[i+1];

        }
        else if(a[i]==a[i+1])
        {
            if(a[i]<max)
                c+=max-a[i];
        }
        else if(a[i]<a[i+1])
        {  if(max<a[i+1])
                c+=max-a[i+1];
           max=a[i+1];
        }
    }
    printf("%d",c);
}
