//code to understand the concept of recusion for factorial and fibonacces series
#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}
int fib(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
    return fib(n-2)+fib(n-1);
    }
}
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a; 
    cout<<"\nFactorial of "<<a<<" is :"<<fact(a);
    cout<<"\nFibonis series at position "<<a<<" is :"<<fib(a);
    cout<<"\nFibonacis series is:";
    for(int i=0;i<=a;i++){
        cout<<fib(i)<<" ";
        
    }

}