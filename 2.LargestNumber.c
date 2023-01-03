#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    
        if((a>c)&&(a>b))
        {
            printf("greatest is: %d",a);
        }
        
    else if((b>c)&&(b>a))
       
            printf("greatest is: %d",b);

    else
          printf("greatest is: %d",c);
   
        
    
    return 0;
}