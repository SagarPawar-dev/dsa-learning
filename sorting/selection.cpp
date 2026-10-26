#include<bits/stdc++.h>
using namespace std;


void selectionSort(int a[], int n){

    for(int i = 0; i<=n-2;i++){
        int mini=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[mini]>a[j]){
                mini=j;
            }
        }
        int temp = a[mini];
        a[mini]= a[i];
        a[i]=temp;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}