#include<iostream>
using namespace std;

int main(){
    int arr[]={1,6,3,10}, curSum=0, MaxSum=0, k=3;
    int size=sizeof(arr)/sizeof(arr[0]);

    if (k>size) return 0;
     
    //sum of first window
    for(int i=0; i<k; i++){
        curSum+=arr[i];
       }
      MaxSum=curSum; 
    // sum of rest window
    for(int i=k; i<size; i++){
        curSum+=arr[i]-arr[i-k];
        MaxSum=max(curSum,MaxSum);
       }   

    cout<<endl; 
    cout<<"Maximum sum is:"<<MaxSum;
}