// SQUARE PETTERN
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){//outer loop
        for(int j=1;j<=n;j++){//inner loop
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}


//for printing "*"
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){//outer loop
        for(int j=1;j<=n;j++){//inner loop
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//print cherecter

#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch;
            ch=ch+1;
        }
        cout<<endl;

    }
    return 0;
}

//contineous number
#include<iostream>
using namespace std;
int main(){
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;

    }
    return 0;
}