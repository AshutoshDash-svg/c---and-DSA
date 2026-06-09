//vector and its function
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    cout<<"size of the vectoe: "<<vec.size()<<endl;
    vec.push_back(6);
    cout<<"size of the vectoe after push_back: "<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size of the vectoe after pop_back:  "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<"value at index 2: "<<vec.at(2)<<endl;
    cout<<"value at index 3: "<<vec.at(3)<<endl;
    for(int val:vec){
        cout<<val<<endl;
    }
    return 0;

}
