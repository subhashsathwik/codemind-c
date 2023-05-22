#include<stdio.h>
int main(){
    int n,c=1,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=n){
            c=0;
            printf("NO");
            break;
        }
    }
    if(c==1)
    printf("YES");
}