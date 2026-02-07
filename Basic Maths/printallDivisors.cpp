#include<bits/stdc++.h>
using namespace std;

void allDivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
void allDivisors1(int n){ //Optimal Approach
    vector<int> ls;
for(int i=1; i<=sqrt(n);i++){
    if(n%i==0){
        ls.push_back(i);
        if((n/i)!=i){
            ls.push_back(n/i);
        }
    }

}
sort(ls.begin(), ls.end());
for(int i=0; i<ls.size(); i++){
    cout<<ls[i]<<" ";
}
}

int main(){
    int n;
    cin>>n;
    allDivisors1(n);
}