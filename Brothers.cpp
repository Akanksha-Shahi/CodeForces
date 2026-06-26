// Given two person names.Each person has {"the first name" + "the second name"} Determine whether they are brothers or not.
// Note: The two persons are brothers if they share the same second name.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string F1, S1, F2, S2;
    cin>> F1 >> S1;
    cin>> F2 >> S2;
    if ( S1 == S2) cout<<"ARE Brothers";
    else cout<<"NOT";
}
