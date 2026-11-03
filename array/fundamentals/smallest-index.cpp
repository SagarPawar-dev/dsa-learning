#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& arr, int target) {
        for(int i=0;i<=arr.size()-1;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linearSearch(arr,target);
    return 0;
}