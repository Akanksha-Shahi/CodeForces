// Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong.The comparison is as follows: A < B, A > B, A = B. Where A, B are two integer numbers and S refers to the sign between them.
#include<iostream>
using namespace std;
int main(){
    int A, B;
    char S;
    cin>> A>> S>> B;
    if(S=='>'){
        if(A>B)cout<<"Right";
        else cout<<"Wrong";
    }
    else if(S=='<'){
        if(A<B)cout<<"Right";
        else cout<<"Wrong";
    }
    else {
        if(A==B)cout<<"Right";
        else cout<<"Wrong";
    }
}