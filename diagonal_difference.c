#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,ld=0,rd=0,ad;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                ld=ld+a[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==(n-1-j))
            {
                rd=rd+a[i][j];
            }
        }
    }
    ad = abs(ld-rd);
    printf("%d",ad);
}
