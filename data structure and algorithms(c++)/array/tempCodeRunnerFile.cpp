//find the index of the smallest and the larget value for the array
#include<iostream>
#include<climits>
using namespace std;int main(){
cout<<"enter the number :"<<endl;
int nums[6];
int size=6;
for(int i=0;i<size;i++){
    cin>>nums[i];
    }
    int smallestindex=0;
    int largestindex=0;
    for(int i=0;i<size;i++){
        if(nums[i]<nums[smallestindex]){
            smallestindex=i;
        }
        if(nums[i]>nums[largestindex]){
            largestindex=i;
        }
    }
    cout<<"smallest value ="<<nums[smallestindex]
    <<"at index "<<smallestindex<<endl;
    cout<<"largest value= "<<nums[largestindex]
    <<"at index of "<<largestindex<<endl;
}