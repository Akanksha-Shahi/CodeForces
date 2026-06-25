// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    if((y!=0 && x%y==0) || (x!=0 && y%x==0)){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
}