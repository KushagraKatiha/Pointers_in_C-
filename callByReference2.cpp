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

// Function to get first and last indecis of ch in str using address of operater
void getIndecies(string str, char ch, int &first, int &last){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ch){
            first = i;
            break;
        }
    }

    for(int i = str.size(); i >= 0; i--){
        if(str[i] == ch){
            last = i;
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

    // getIndecies(str, ch, firstIdxPtr, lastIdxPtr);
    getIndecies(str, ch, firstIdx, lastIdx);

    cout<<*firstIdxPtr<<" "<<*lastIdxPtr<<endl;
    cout<<firstIdx<<" "<<lastIdx<<endl;
    return 0;
}