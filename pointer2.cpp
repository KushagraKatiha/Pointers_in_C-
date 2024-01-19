#include<iostream>
using namespace std;

int main(){

    int x = 123;
 
    int *ptr1 = &x;

    cout<<"Address stored into the pointers is: "<<ptr1<<endl;
    // To access the value stored in the address which is stored in the pointer we will use the
    // deference operater "*"

    cout<<"Value stored at the address which is stored int *prt1 is : "<<*ptr1<<endl;

    // If we change the value of x and try to access it using the pointer 

    x = 432;
    cout<<"Accessing the changed value using pointer: "<<*ptr1<<endl;

    // updating the value of x using the pointer
    *ptr1 = 1002;
    cout<<"Value of x updated by ptr: "<<x<<endl;

    return 0;
}