#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);

    int key;
    scanf("%d",&key);
    int beg=0;
    int end=n-1;
    int j=0;
    while(beg<=end){

        int mid1=beg+(beg+end)/3;
        int mid2=end-(beg=end)/3;

        if(ar[mid1]==key){
            printf("YES and at %d",mid1+1);
            j=1;
            break;
        }
        if(ar[mid2]==key){
            printf("YES and at %d",mid2+1);
            j=1;
            break;
        }

        else  if(ar[mid1]>key)
        {
            end=mid1-1;;
        }
        else if(ar[mid2]<key)
        {
            beg=mid2+1;

        }
        else
        {
            beg=mid1+1;
            end=mid2-1;
        }
    }
    if(j==0)
    printf("Not found");
}