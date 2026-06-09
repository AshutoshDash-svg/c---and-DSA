//find the smallest and largest value for the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"entr the numers for checking the smallest and the largest number of them"<<endl;
    int nums[6];
    int size=6;
    for(int i=0;i<size;i++){
    cin>>nums[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    cout<<"the smallest number of the given array was: "<<smallest<<endl;
    cout<<"the largest number of the given aray was: "<<largest<<endl;
    return 0;
}


//onether method
#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout<<"entr the numers for checking the smallest and the largest number of them"<<endl;
    int nums[6];
    int size=6;
    for(int i=0;i<size;i++){
    cin>>nums[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout<<"the smallest number of the given array was: "<<smallest<<endl;
    cout<<"the largest number of the given aray was: "<<largest<<endl;
    return 0;
}

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
    for(int i=1;i<size;i++){
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