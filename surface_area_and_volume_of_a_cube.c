#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    float s,v;
    s=6*a*a;
    v=pow(a,3);
    printf("Surface area = %0.2f",s);
    printf(" and Volume = %0.2f",v);
}
