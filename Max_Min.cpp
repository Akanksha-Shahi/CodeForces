// Given 3 numbers A, B and C, Print the minimum and the maximum numbers
#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cin>> A>> B>> C;
    int maxi = max(A, max(B,C));
    int mini = min(A, min(B,C));
    cout<< mini<<' '<< maxi;
}    