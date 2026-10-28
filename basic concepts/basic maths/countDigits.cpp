#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int count = 0;
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}