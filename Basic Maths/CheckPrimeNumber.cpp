#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cnt++;
            
        }
        
    }
    if(cnt==2){
            return true;
        }
        else{
            return false;
        }
}
int isPrime1(int n){ //Optimal Approach
    int cnt=0;
for(int i=1; i<=sqrt(n); i++){
    if(n%i==0){
        cnt++;
        if((n/i)!=i){
            cnt++;
        }
    }
}
if(cnt==2){
    return true;
}
else{
    return false;

}
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    }
