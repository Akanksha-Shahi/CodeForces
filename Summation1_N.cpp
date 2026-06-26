// Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).
#include<iostream>
using namespace std;
int main(){
    long long N;
    cin>> N;
    long long sum = (N*1LL*(N+1)/2);
    cout<<sum<<endl;
}