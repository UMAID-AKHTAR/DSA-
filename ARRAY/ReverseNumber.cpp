#include<iostream>
using namespace std;

int main(){
    int num=123;
    while(num!=0){
        int n=num%10;
        cout<<n;
        num=num/10;
    }
}