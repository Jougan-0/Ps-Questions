#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int a=65+n;

    for(int i=n;i>=1;i-- ){
        for(int j=i;j<n;j++)
        printf(" ");
        for(int j=1;j<=i;j++){
            
            printf("*");
        }
        for(int j=2;j<=i;j++)
         printf("*");
        printf("\n");
    }

    for(int i=1;i<=n;i++ ){
        for(int j=i;j<n;j++)
        printf(" ");
        for(int j=1;j<=i;j++){
            
            printf("*");
        }
        for(int j=2;j<=i;j++)
         printf("*");
        printf("\n");
    }
}