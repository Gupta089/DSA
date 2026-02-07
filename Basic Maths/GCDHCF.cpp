#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b){ //Brute Force Approach
    int gcd=1;
    for(int i=1; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int findGCD1(int a, int b){ //Better Approach
    for(int i=min(a,b); i>=1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;

}
int findGCD2(int a, int b){ //Optimal Approach (Euclidean Algorithm)
    
    while(a>0 && b>0){
        if(a>b){
            a= a%b;
        }
        else{
            b= b%a;
        }
    }
    if(a==0){
        return b;
    }
    else{
        return a;
    }
    }


int main (){
    int a,b;
    cin>>a>>b;
    cout<<findGCD2(a,b);
}