#include<bits/stdc++.h>
using namespace std;

int ArmstrongNum(int n){
    int sum=0;
    int dup=n;
    while(n>0){
        int lD= n%10;
        sum = sum + lD*lD*lD;
        n=n/10;
    }
    if(sum==dup){
        return true;
    }
    else{
        return false;
    }
    }

    int main(){
    int n;
    cin>>n;
    if(ArmstrongNum(n)){
        cout<<"true";
    }
    else{
        cout<<"false";

    }
    }
