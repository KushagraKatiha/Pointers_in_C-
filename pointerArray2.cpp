#include<iostream>
using namespace std;
// Function to call by reference in array using pointers
void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;
}

int main(){
    // Iterating the array using pointers

    int arr[4] = {4,3,2,6};

    for(int i = 0; i < 4; i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;

    // Printing through function
    print(arr, 4);
    return 0;
}