#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter any number-:";
    cin>>n;
    int i=1;
    do
    {
        int table = i*n;
        cout << n << " * " << i << " = " << table << endl;
        i++;
    } while (i<=10);

    return 0;
    

    

}