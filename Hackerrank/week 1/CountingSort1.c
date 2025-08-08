#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,j,n,a[1000001];
    int c[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c[a[i]]++;
    }
    for(i=0;i<100;i++)
        printf("%d ",c[i]);    
    return 0;
}