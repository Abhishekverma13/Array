//try catch exception handing
#include<iostream>
using namespace std;

int main(){
    int numerator, denominator;
    cin>>numerator;
    cin>>denominator;
    try{
        if(denominator==0)
        throw ("Divide by zero";);
        numerator/denominator+1;
        }
        catch (const char* msg){
            cout<<msg<<" message"<<endl;}

    
    float division = numerator/denominator;
    cout<<divison;
    return 0;
} 
