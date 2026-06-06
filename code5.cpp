#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age for check you may eligible or not for voating: "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"congratulation you may voat now: "<<endl;
    }
    else{
        cout<<"you are not eligible for voating"<<endl;
    }
return 0;
}
