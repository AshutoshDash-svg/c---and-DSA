#include<iostream>
using namespace std;
int sumofdigit(int num){
    int digsum=0;
    while(num>0){
        int lastdigit=num%10;
        num/=10;
        digsum+=lastdigit;
}
return digsum;
}
int main(){
    cout<<"sum os digits is ="<< sumofdigit(444)<<endl;
    return 0;
}