//triangle using *
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//triangle using number
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}

//triangle using cherecter
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;

        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}

//reverse triangle
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

//floidstriangle
#include<iostream>
using namespace std;
int main(){
    int n=4;

    int num=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}