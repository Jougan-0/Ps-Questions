#include <stdio.h>
int fact(int f)
{
    int p=1;
    for(int i=1;i<=f;i++)
    p=p*i;

    return p;
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);

    int s=0,t=1;
    for(int i=1;i<=n;i+=2)
    {
        s=s+(t*(pow(x,i))/fact(i));
        t=t-1;
    }

    printf("%d",s);

    return 0;
}
