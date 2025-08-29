#include<iostream>
#include<string>
using namespace std;
class Binary{
    string s;
    public:
    void read(void);
    void check(void);
    void complement(void);
    void display(void);
};
void Binary::read(void){
    cout<<"Enter the binary no:";
    cin>>s;
}
void Binary::check(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Icorrect binary code";
            exit(0);
        }
    }
}
void Binary::complement(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void Binary::display()
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
int main (){
    Binary b;
    b.read();
    b.check();
    b.complement();
    b.display();
return 0;
}

    