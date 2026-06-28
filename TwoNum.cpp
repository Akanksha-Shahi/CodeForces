// Given 2 numbers A and B. Print floor, ceil and round of A/B
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double A,B;
    cin>>A >>B;
    cout<<"floor "<< A << " / "<< B <<" = "<<floor(A/B)<<endl;
    cout<<"ceil "<< A << " / "<< B <<" = "<<ceil(A/B)<<endl;
    cout<<"round "<< A << " / "<< B <<" = "<<round(A/B)<<endl;
}    