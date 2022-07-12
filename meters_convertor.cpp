
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browserjh.

#include<iostream>
using namespace std;

void convertor(double f){
    cout<<"\nFEET \t"<<"METERS\n";
    cout<<f<<"\t"<<(f * 3.28084);
}
int main()
{
    int feet;
    // value to convert
    cout<<"Enter the number to convert: ";
    cin>>feet;
    convertor(feet);
    return 0;
}
