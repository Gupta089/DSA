#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count = 0;
    while (n>0){
        count++;
        n = n/10;
    }
    return count;
}

int countDigits1(int n){ //optimal Approach
    int cnt= (int)(log10(n)+1); 
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits1(n);
}
