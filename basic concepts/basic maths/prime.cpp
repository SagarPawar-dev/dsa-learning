#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int count =0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<checkPrime(n)<<endl;
    }    
}