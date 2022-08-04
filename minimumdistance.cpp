#include <bits/stdc++.h>
using namespace std;
 
int minDist(int arr[], int n, int x, int y)
{
    int i, j;
    int min_dist = INT_MAX;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((x == arr[i] && y == arr[j]
                 || y == arr[i] && x == arr[j])
                && min_dist > abs(i - j)) {
                min_dist = abs(i - j);
            }
        }
    }
    if (min_dist > n) {
        return -1;
    }
    return min_dist;
}
 

int main()
{
    cout << "Enter size of array" << endl;
    int n,x,y;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout << "Enter first no :-" ;
    cin >> x;
    cout << "Enter second no.:- ";
    cin >>y;
 
    cout << "Minimum distance between " << x << " and " << y
         << " is " << minDist(arr, n, x, y) << endl;
}