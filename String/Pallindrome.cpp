#include<iostream>
using namespace std;

int main(){
  string s="MALAYALAM";
  int left=0, right=s.length()-1;
  bool check=true;
  while(left<right)
  {
     if(s[left]!=s[right]){
        cout<<"Not a Pallindrome";
        return 0;
      }
    left++;
    right--;
  }

 if(check) { cout<<"Pallindrome"; } 
 return 0;
}

