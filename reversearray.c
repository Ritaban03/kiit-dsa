#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int min=999999;
    int max=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[(n-1)-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed Array :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}