#include<stdio.h>
int main()
{
    int i,j;
    for(i=69;i>=65;i--)
    {
        int k=i;
        for(j=69;j>=i;j--)
        {
            printf("%c",(char)k);
            k++;
        }
        printf("\n");
    }
    return 0;
}