#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  /*  ----INterger typecasting------
  int a = 50;
    float b =50.60;
    cout<<"the vale of a is"<<float(a);
    cout<<"the value of b is"<<int(b);*/
    //------switch case-----
   /* int age;
    cout<<"Enter the age:\n";
    cin>>age;
    switch(age){
        case 1:
        cout<<"agwe is 1\n";
        break;
        case 2:
        cout<<"age is 2\n";
        break;
        default:
        cout<<"incorrect chooice\n";
        break;
    }
    cout<<"done with switch case";*/
    //---------manipulators--------
    /*int a=4,b=2435, c=12345;
    cout<<setw(5)<<setfill('*')<<a<<"\n"<<setfill('*')<<setw(5)<<b<<"\n"<<setfill('*')<<setw(5)<<c<<"\n";
   // cout<<setfill('*')<<a<<"\n"<<setfill('*')<<b<<"\n"<<setfill('*')<<c<<"\n";*/
   //------table of 6 using do while loop------
   /*int i=1;
   int a=6;
   do{
    cout<<"6*"<<i<<"="<<6*i<<endl;
    i++;
   }while(i<=10);*/
   //------pointer in C++
  /*int a;
   cout<<"Enter the value of a:\n";
   cin>>a;
  //
   int *b = &a;
   cout<<"The address of "<<a<<" is:"<<b<<endl;
   cout<<"The value of "<<b<<" is:"<<*b<<endl;*/
   //--- Arraays----
   int n,i, arr[10];
   cout<<"Enter the arry size:";
   cin>>n;
   cout<<"Enter the arry Element:\n";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }//display arry element
   cout<<"The array elements are:\n";
   for(int i=0;i<n;i++){
   cout<<arr[i]<<"\t";
   }
   int*p = arr;
   cout<<"\n"<<&p+1;
return 0;
}