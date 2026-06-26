// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D)
#include<iostream>
using namespace std;
int main(){
    long long A, B, C, D;
    cin >> A >> B>> C >> D;
    long long X = (A* B) - (C* D);
    cout<< "Difference = "<< X<< endl;
}
