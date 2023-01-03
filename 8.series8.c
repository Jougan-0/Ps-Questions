int main()
{
    int n,x;
    scanf("%d%d",&n,&x);

    int s=0;
    for(int i=1;i<=n;i++)
    {
         s=s+(i*(i+1)*(i+2));
    }

    printf("%d",s);
    return 0;
}
