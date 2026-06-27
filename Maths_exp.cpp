// Given a mathematical expression. The expression will be one of the following expressions:A + B = C, A - B = C and A * B = C where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign
// Print "Yes" If the expression is Right , Otherwise print the right answer of the expression
#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    if( S=='+'){
        if(A+B==C) cout<<"Yes";
        else cout<<A+B;
    }
    if(S='-'){
        if(A-B==C) cout<<"Yes";
        else cout<<A-B;
    }
    if(S=='*'){
        if(A*B==C) cout<<"Yes";
        else cout<<A*B;
    }
    return 0;
}