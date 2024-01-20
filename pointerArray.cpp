#include<iostream>
using namespace std;

int main(){
    // Array as a pointer array
    int arr[3] = {4,7,9};
    // "arr" or name of an array will provide us the pointer to the 1st element of an array
    
    int *ptr = &arr[0];     // will store the address of the 1st element of the array

    cout<<ptr<<" "<<arr<<endl;  // both will provide the same output as both of them are containing the address of the first element (0th indexed element)

    cout<<*ptr<<" "<<*arr<<endl; // both will give the 1st element of the array

    cout<<*(ptr + 1)<<" "<<*(arr + 1)<<endl;

    cout<<*(ptr + 2)<<" "<<*(arr + 2)<<endl; 
    return 0;
}