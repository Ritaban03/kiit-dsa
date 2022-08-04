#include<iostream>
using namespace std;

int smallest(int arr[], int n){
    int small=-1;
    for(int i=0;i<n;i++){
        if(small<arr[i])
        small=arr[i];
    }
    return small;
}

int largest(int arr[], int n){
    int big=999999;
    for(int i=0;i<n;i++){
        if(big>arr[i])
        big=arr[i];
    }
    return big;
}

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin >> n;
    int arr[n];
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << "The largest element is " << smallest(arr,n) << endl;
    cout << "The smallest element is " << largest(arr,n) << endl;

}