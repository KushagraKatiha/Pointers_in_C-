#include<iostream>
using namespace std;

int main(){
    // Implement addition of two numbers using pointers

    int x, y;    // Initialize x and y, they will have garbage value now
    cout<<"Enter x and y: "; cin>>x>>y;

    int *ptr_x = &x; // Pointer to store address of x
    int *ptr_y = &y; // Pointer to store address of y

    int result; // Initialize result to store result

    int *ptr_result = &result; // Pointer to store address of result

    *ptr_result = *ptr_x + *ptr_y;

    cout<<"Answer: "<<*ptr_result<<" "<<result<<endl;
    return 0;
}