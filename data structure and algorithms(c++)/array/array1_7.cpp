#include<iostream>
using namespace std;
void sumofarray(int arr1[],int arr2[],int result[],int size){
    for(int i=0;i<size;i++){
        result[i]=arr1[i]+arr2[i];
    }
}
void productofarray(int arr1[],int arr2[],int result[],int size){
    for(int i=0;i<size;i++){
        result[i]=arr1[i]*arr2[i];
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    int sum[5];
    int product[5];
    sumofarray(arr1,arr2,sum,5);
    cout<<"sum of the array: ";
    for(int i=0;i<5;i++){
        cout<<sum[i]<<" ";
    }
    productofarray(arr1,arr2,product,5);
    cout<<"product of thr array is: ";
    for(int i=0;i<5;i++){
        cout<<product[i]<<" ";
    }
    return 0;
}