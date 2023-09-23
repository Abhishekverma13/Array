#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 6;
    cout<<"Before swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
