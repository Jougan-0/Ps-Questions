#include <stdio.h>
double mean(int ar[])
{
    double s;
    for(int i=0;i<5;i++)
        s=s+ar[i];
        s=s/5.0;
    return s;
}

int meadian(int ar[])
{
    return(ar[3]);
}
int main() {
    int ar[5];
    for(int i=0;i<5;i++)
    scanf("%d",&ar[i]);

    double a =mean(ar);
    double b=meadian(ar);

    printf("Mena %d  Median %d",a,b);


}