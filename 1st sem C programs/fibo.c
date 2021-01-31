#include<stdio.h>
int main()
{
    int n,a,b,y;
    printf("Enter the upper limit : ");
    scanf("%d",&n);
    a=0;
    b=1;
    y=1;
    printf("\nThe fibonacci numbers are : ");
    if(n>0)
        printf("%d",a);
    while(y<n)
    {
        printf(", %d",y);    
        y=a+b;
        a=b;
        b=y;
    }
    printf(".\n");    
    return 1;
}
