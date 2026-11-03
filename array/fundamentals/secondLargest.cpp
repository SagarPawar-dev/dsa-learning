#include<bits/stdc++.h>
using namespace std;

int secondLargestElement (vector<int>& arr) {
        int largest = INT_MIN;
        int slargest = INT_MIN;

        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                slargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>slargest){
                slargest=arr[i];
            }
        }
        if(slargest == INT_MIN) return -1;
        else return slargest;
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<secondLargestElement(arr);
    return 0;
}