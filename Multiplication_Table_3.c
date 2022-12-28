#include<stdio.h>
int main()
{
    int n,m,i,a;
    scanf("%d%d%d",&n,&m,&a);
    for(i=m;i<=a;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
    
}