#include<iostream>
using namespace std;

int main(){

    int x = 10;
    int *ptrx = &x;
    cout<<sizeof(x)<<endl;

    float y = 9.8;
    float *ptry = &y;
    cout<<sizeof(y)<<endl;

    double z = 9;
    double *ptrz = &z;
    cout<<sizeof(z)<<endl;

    cout<<ptrx<<" "<<(ptrx+1)<<endl;
    cout<<ptry<<" "<<(ptry+1)<<endl;
    cout<<ptrz<<" "<<(ptrz+1)<<" "<<(ptrz+2)<<" "<<(ptrz+1)<<endl;
    return 0;
}