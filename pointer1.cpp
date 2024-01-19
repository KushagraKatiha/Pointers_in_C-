#include<iostream>
using namespace std;

int main(){

    int x = 0;
    int y = 10;
    // int z = &y;          Address data can't be assigned to a int variable
    cout<<"Address of x and y are : "<<&x<<" "<<&y<<endl;    // '&' address of operater provides the address of the variable

    // This task can be done using a pointer
    // Pointer => It is a variable which can store address
    // Pointer Syntax => data_type *pointer_name = &(variable_name)
    // Data type of the pointer belongs to the data type of the variable whose address it will be storing

    int *ptr1 = &x;
    int *ptr2 = &y;

    cout<<"Address stored into the pointers are: "<<ptr1<<" "<<ptr2<<endl;

    return 0;
}