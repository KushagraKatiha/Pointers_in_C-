#include<iostream>
using namespace std;

int main(){

    int x = 0;
    int y = 10;
    // int z = &y;          Address data can't be assigned to a int variable
    cout<<&x<<" "<<&y<<endl;    // '&' address of operater provides the address of the variable
    return 0;
}