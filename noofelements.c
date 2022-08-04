#include<stdio.h>
int main(){
    int n,lo,hi;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the lower limit\n");
    scanf("%d",&lo);
    printf("Enter the upper limit\n");
    scanf("%d",&hi);
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=hi & arr[i]>=lo){
            printf("%d\n",arr[i]);
            flag++;
        }
    }
    if(flag==0){
        printf("%d",0);
    }
}