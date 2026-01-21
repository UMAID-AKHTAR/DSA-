#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> us;
          for(auto i=0; i<nums.size(); i++){
            int temp=target-nums[i];
            if(us.find(temp)!=us.end()){
                return {us[temp],i} ;
            }
            us.emplace(nums[i],i);
          }
        return {};  
    }
};


int main(){
    vector<int> v={10,8,5,3,9,7,2,1,6,4};
    Solution s;
    vector<int> result=s.twoSum(v,18);
    if(!result.empty())
    {
       cout <<"Indices: "<<result[0]<<" and " << result[1];
       cout <<"Indices: "<<v[result[0]]<<" and " << v[result[1]];       
    }
}