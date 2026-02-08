#include<bits/stdc++.h>
using namespace std;


void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";

        }
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";

        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars =i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=0; j<stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start =0;
        }
        for(int j=0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=1; j<=2*n-2*i;j++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int num =1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout <<num;
            num = num+1;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=1; i<=n; i++){
        for(char ch = 'A'; ch<= 'A'+(i-1); ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=1; i<=n; i++){
        for(char ch = 'A'; ch<= 'A'+(n-i); ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void pattern16(int n){
    for(int i=0; i<n; i++){
        char ch = 'A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch;
        }
        cout<<endl;
    }}
void pattern17(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++){
            cout<<ch;
            if(j<breakpoint){
                ch++;
            }
            else{
                ch--;
            }
            
        }
        for(int j=0;j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0; i<n; i++){
        for(char ch = ('A'+n-1)-i; ch<='A'+n-1; ch++){
            cout<< ch;
        }
        cout<<endl;
    }
}
void pattern19(int n){
    
    int inis=0;
    for(int i=0; i<n; i++){
        for (int j = 1; j <= n - i; j++) {
                cout << "*";
            }
        for (int j = 0; j < inis; j++) {
                cout << " ";
            }
        for (int j = 1; j <= n - i; j++) {
                cout << "*";
            }
        inis += 2;
        cout<<endl;
    }
    inis = 2*n-2;
    for(int i=1; i<=n; i++){
        for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        for (int j = 0; j < inis; j++) {
                cout << " ";
            }
        for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        inis -=2;
        cout<<endl;
    }
}
void pattern20(int n) {
        // Initialize spaces between star blocks
        int spaces = 2 * n - 2;

        // Loop for rows
        for (int i = 1; i <= 2 * n - 1; i++) {
            // Calculate stars for first half
            int stars = i;

            // Adjust stars for second half
            if (i > n) stars = 2 * n - i;

            // pattern left stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // pattern spaces
            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            // pattern right stars
            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            // Move to next line
            cout << endl;

            // Adjust spaces for next row
            if (i < n) spaces -= 2;
            else spaces += 2;
        }
    }
void pattern21(int n) {
        // Outer loop for rows
        for (int i = 0; i < n; i++) {
            // Inner loop for columns
            for (int j = 0; j < n; j++) {
                // pattern star if it's a border cell
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    cout << "*";
                // pattern space otherwise
                else
                    cout << " ";
            }
            // Move to next line after each row
            cout << endl;
        }
    }
void pattern22(int n) {
        // Outer loop for rows
        for (int i = 0; i < 2 * n - 1; i++) {
            // Inner loop for columns
            for (int j = 0; j < 2 * n - 1; j++) {
                // Calculate distance from top
                int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // pattern number (starts with n at border, decreases inside)
                cout << (n - minDist) << " ";
            }
            // Move to the next row
            cout << endl;
        }
    }
    int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int n;
    cin>>n;
    pattern13(n);
    }
    
}



