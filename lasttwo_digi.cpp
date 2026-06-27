// Given 4 numbers A, B, C and D. Print the last 2 digits from their Multiplication.
#include<iostream>
using namespace std;
int main(){
    long A, B, C, D;
    cin>>A>>B>>C>>D;
    A%=100;
    B%=100;
    C%=100;
    D%=100;
    long long last_two = (A*B*C*D)%100;
    if(last_two < 10) cout<<0<<last_two;
    else cout<<last_two;
    return 0;
}    