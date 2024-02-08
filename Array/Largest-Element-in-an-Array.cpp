#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int max = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}