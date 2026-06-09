#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int kadane(vector<int>& arr){
    int currsum=0;
    int maxsum=INT_MIN;
     for(int i=0;i<arr.size();i++){
        currsum+=arr[i];
        maxsum=max(maxsum,currsum);
        if(currsum<0){
            currsum=0;
        }
     }
     return maxsum;
}
int main(){
    vector<int>arr={3, -4, 5, 4, -1, 7, -8};
    cout<<"maximum subarray sum= "<<kadane(arr)<<endl;
    return 0;
}
