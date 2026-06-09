//reverse using vector
#include<iostream>
#include<vector>
using namespace std;
int reversearr(vector<int>& arr,int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int>nums={1,3,5,7,8,9};
    int sz=6;
    reversearr(nums,sz);
    cout<<"reversed array: ";
    for(int i=0;i<sz;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}