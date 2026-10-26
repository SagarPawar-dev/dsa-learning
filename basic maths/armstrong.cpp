#include<bits/stdc++.h>
using namespace std;

bool checkArmstrong(int x){
    int sum = 0;
    int count = 0;
    int temp = x;
    int originalNum = x;

    while(temp!=0){
        count++;
        temp=temp/10;
    }

    while(x!=0){
        int lastDigit = x % 10;
        sum = sum + round(pow(lastDigit,count));
        x = x /10;
    }

    if(sum==originalNum){
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
        cout<<checkArmstrong(n)<<"\n";
    }

}