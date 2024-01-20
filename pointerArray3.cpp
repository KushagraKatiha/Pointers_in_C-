#include<iostream>
using namespace std;

int main(){
    // Pointer to point the whole array 
    int arr[4] = {3,2,6,4};
    int (*p)[4] = &arr;

    cout<<*p<<" "<<p<<" "<<arr<<" "<<*arr<<endl;
    return 0;
}