#include<iostream>
using namespace std;

// Function to get first and last indecis of ch in str using pointers
void getIndecies(string str, char ch, int *ptr1, int *ptr2){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ch){
            *ptr1 = i;
            break;
        }
    }

    for(int i = str.size(); i >= 0; i--){
        if(str[i] == ch){
            *ptr2 = i;
            break;
        }
    }
}

int main(){
    // Find first and last occurence of given character in given string
    string str = "aabcad";
    char ch = 'a';

    int firstIdx = -1;
    int lastIdx = -1;

    int *firstIdxPtr = &firstIdx;
    int *lastIdxPtr = &lastIdx;

    getIndecies(str, ch, firstIdxPtr, lastIdxPtr);

    cout<<*firstIdxPtr<<" "<<*lastIdxPtr<<endl;
    cout<<firstIdx<<" "<<lastIdx<<endl;
    return 0;
}