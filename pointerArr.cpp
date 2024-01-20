// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1, 19};
//     int *ptr = &arr[0];

//     // cout<<ptr<<" "<<*ptr<<endl;

//     cout<<*ptr++<<" ";
//     cout<<*ptr<<endl; 
//     return 0;
// }


// __________________________________________________________
// Altering the value of array using pointer 

#include<iostream>
using namespace std;

int main(){

    int arr[2] = {5, 8};
    int *ptr = &arr[0];

    cout<<(*ptr)++<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    return 0;
}