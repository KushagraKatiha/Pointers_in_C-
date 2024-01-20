// Types of pointers
// 1. Wild Pointers
// 2. Null Pointers
// 3. Dangling Pointers
// 4. Void Pointers

// => Wild Pointer: Pointer declared but not initialized, due to this it start pointing random address, it can also provide segmentation fault(error)

// => Null Pointer: If we want to have a pointer variable, which is just declared but will get address later to store

// => Dangling Pointer: It is a type of pointer that points to a memory location which is not valid,(previously the value might occur at that pointer, but after any case it might get deleted)

// => Void Pointer: These are special pointers that can point to any data type value, void pointers can not be dereferenced(type-casting can be used to do so)

#include<iostream>
using namespace std;

int main(){
    int *ptr;           // Wild Pointer
    cout<<ptr<<" "<<*ptr<<endl;

    int *ptr1 = NULL;   // Null Pointer
    int *p = 0;         // Null Pointer
    // char *p2 = '\0';     // Null Pointer
    cout<<ptr1<<" "<<p<<endl;

    {
        int x = 22;
        ptr1 = &x;      // Dangling Pointer
        cout<<ptr1<<endl;
    }

    cout<<ptr1<<endl;

    float z = 10.7;
    int y = 2;
    void *ptrv = &z;    // Void Pointer

    cout<<ptrv<<endl;

    ptrv = &y;

    cout<<ptrv<<endl;

    int *integerPointer = (int *)ptrv;
    cout<<*integerPointer<<endl;
    return 0;
}