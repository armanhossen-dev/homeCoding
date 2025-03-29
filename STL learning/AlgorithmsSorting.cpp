#include<iostream>
#include<vector>
#include <algorithm>  // For sort()
using namespace std;

int manin(){
    //vector<int> arr = {5,3,1,7,4};
    //sort(arr.begin(), arr.end());

    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< n << endl;
    sort(arr, arr+n);
    cout << "Sorted array : ";    
    for(int i = 0; i<n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}