//code to swap two no ny call by referance 
#include<iostream>
using namespace std;
/*void swap(int *a,int *b){  // we can also use "&" here
int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x,y;
    cout<<"Enter 1 no:\n";
    cin>>x;
    cout<<"Enter 2 no:";
    cin>>y;
    swap(x,y);
    cout<<"1 no is:"<<x<<"\n2 no is:"<<y;*/
   //call by referance 
    /*void ch(int &x){
    x =3;
}
int main(){
int a = 5;
cout<<"Before no is:"<<a;
ch(a);
cout<<"\nAfter no  is:"<<a;
}*/


//Default argument
void mult(int a = 5,int b = 4){
    cout<<"MULTIPLICATION is: "<<a*b<<"\n";
}
int main (){
    mult();
    mult(2);
    mult(10,2);
}

