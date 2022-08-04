#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin >>n;
    int arr[n];
    for(int k=0;k<n;k++)
    cin >> arr[k];
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]>arr[i])
            {
                c=1;
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
        if(c==0)
        cout<<arr[i]<<" "<<-1<<endl;
    }
}