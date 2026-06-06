#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the chetrecter fro check it was upper cse or lower case: "<<endl;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"lower cse"<<endl;
    }
    else{
        cout<<"upper case"<<endl;
    }
    return 0;
}