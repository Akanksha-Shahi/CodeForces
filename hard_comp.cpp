// Given 4 numbers A,B,C and D. If AB > CD print "YES" otherwise, print "NO
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long A, B, C, D;
    cin>> A>> B>> C>> D;
    if(B*log(A) > D*log(C)) cout<<"YES";
    else cout<<"NO";
    return 0;
}    