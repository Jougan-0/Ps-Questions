#include <stdio.h>
void main(void){
    int n;int m;
	scanf("%d",&n);

	int ar[n][n];

	for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
	scanf("%d",&ar[i][j]);

    for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
    {
        if(i!=j)
        {
            int t=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=t;
        }
    }

    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
	printf("%d ",ar[i][j]);
    printf("\n");
    }

}