#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    bool isprime =true;

    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime == true){
        cout<<"prime number"<<endl;
    }else{
        cout<<"not a prime number"<<endl;
    }

}