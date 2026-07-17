#include<iostream>
using namespace std;
void solve(){
    long long n, k;
    cin>> n >>k;
    long long total_popcount =0;
    long long curr_bit =0;
    while(n>0){
        long long full_row_cost = k*curr_bit;
        if(n>=full_row_cost){
            total_popcount += k;
            n -= full_row_cost;
        }
        else {
            total_popcount +=(n/curr_bit);
            break;
        }
        curr_bit *= 2;
    }
    cout<<total_popcount<<"\n";
}
