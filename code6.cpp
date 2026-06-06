#include<iostream>
using namespace std;
int main(){
    int mark ;
    float percentage;
    cout<<"enetr your total mark in the exam: "<<endl;
    cin>>mark;
    percentage=(mark*100.0)/600;
    cout<<"the percentage secured by the student was: "<<percentage<<endl;
    if(percentage>=90){
        cout<<"a+"<<endl;
    }
    else if(percentage>=80){
        cout<<"a"<<endl;
    }
    else if(percentage>=70){
        cout<<"b+"<<endl;
    }
    else if(percentage>=60){
        cout<<"b"<<endl;
    }
    else if(percentage>=50){
        cout<<"c"<<endl;
    }
    else if(percentage>=40){
        cout<<"d"<<endl;
    }
    else if(percentage>=30){
        cout<<"e"<<endl;
    }
    else{
        cout<<"f"<<"try to next time"<<endl;
    }

}