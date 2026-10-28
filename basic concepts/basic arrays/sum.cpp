#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
        long long sum =0;
        for(int i=0;i<=n-1;i++){
            sum+=arr[i];
        }
        return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<sum(arr, n);
}