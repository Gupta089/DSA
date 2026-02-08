#include<bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){ //decimal number to binary number
    
    int ans=0;
    int power=1;
    while(decNum>0){
        int lastDigit = decNum%2;
        ans = ans + lastDigit*power;
        power = power*10;
        decNum = decNum/2;
        
    }
    return ans;
}
int binaryToDec(int binNum){ // binary number to decimal number
    int ans=0;
    int power=1;
    while(binNum>0){
        int lastDigit = binNum%10;
        ans = ans + lastDigit*power;
        power = power*2;
        binNum = binNum/10;
        
    }
    return ans;
}

int main(){
    int decNum;
    cin>>decNum;
    cout<<decToBinary(decNum);
}