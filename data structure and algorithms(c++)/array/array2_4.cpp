//linear search using vector
#include<iostream>
#include<vector>
using namespace std;
int linearsearch(vector<int> arr,int target){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>nums={10,20,30,40,50};
    int target;
    cout<<"enter the target for finding it: "<<endl;
    cin>>target;
    int result=linearsearch(nums,target);
    if(result!=-1){
        cout<<"eliment found at index: "<<result<<endl;
    }else{
        cout<<"eliment was not found"<<endl;
    }
    return 0;
}