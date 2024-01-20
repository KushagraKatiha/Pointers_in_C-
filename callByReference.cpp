#include<iostream>
using namespace std;

// Function to swap the values of the x and y
void swap(int x, int y){
    
    // Here, call by value is used therefore there will be no change in the original values
    int temp = x;
    x = y;
    y = temp;

}

// To achieve this we can use call by reference using pointers
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// To achieve this we can use address of operater 
void swapUsingAddress(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){

    int x = 10;
    int y = 3;

    int *ptrx = &x;
    int *ptry = &y;

    swap(x, y);
    cout<<"x: "<<x<<" y: "<<y<<endl;

    // swap on passing pointers
    // swap(ptrx, ptry);
    // cout<<"x: "<<x<<" y: "<<y<<endl;

    swapUsingAddress(x, y);
    cout<<"x: "<<x<<" y: "<<y<<endl;

    return 0;
}