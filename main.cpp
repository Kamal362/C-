
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browserjh.

#include<iostream>
#include<algorithm>

using namespace std;

bool max_val(double a, double b){
     return a < b;
}
int main()
{
    // int counter,i,a,b,c;
    // cout<<"how many numbers are you comparing: ";
    // cin>>counter;
    
    // for( i = 0; i < counter; i++){
    //   cout<<"Enter value "<<(i+1)<<" : ";
    //   cin>> i;  
    // }
 
    double result = max({1,4,7},max_val)
    cout<<"MAXIMIUM VULUE of a,b and c: "<<result;
    return 0;
}
