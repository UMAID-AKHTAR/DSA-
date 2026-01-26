#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter name:";
    cin>>ch;
    cout<<ch<<endl;

    int arr[]={2,2,3,3,3,4,5,6,7,7,8,9,9};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int pointer=0;
    for (int i=0; i<size; i++){
        if(arr[pointer]!=arr[i]){
            pointer++;
            arr[pointer]=arr[i];
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    size=pointer;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}