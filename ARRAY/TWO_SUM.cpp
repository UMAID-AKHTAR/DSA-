/* sum of two number using two pointers */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

 int main()
 {
    vector <int> v={1,2,3,4,5,6,7,8,9,10};
    int target=5, l=0, r=v.size()-1;
    while(l<r)
    {   
      if(target==v[l]+v[r])
      {
        cout<<"Indexes are:"<<l<<" "<<r<<" "<<"Numbers are:"<<v[l]<<" "<<v[r];
        return 0;
    } 
      else if( v[l] + v[r]>target ) r--;
      else {l++;} 
    }
   return 0; 
}
