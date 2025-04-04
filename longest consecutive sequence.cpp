#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    int longestConsecutive(vector<int>&nums){
        if(nums.empty()){
            return 0;
        }

        int length=1;
        int maxLength=length;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            // skip duplicate elements
            if(i>0 and nums[i]==nums[i-1]){
                continue;
            }
            // check for consecutive elements
            if(i>0 and nums[i]==nums[i-1]+1){
                length++;
            }
            else if(i>0 and nums[i]!=nums[i-1]+1){
                maxLength=max(maxLength,length);
                length=1;
            } 
        }
        maxLength=max(maxLength,length);     // if last else if condition is not satisfied
        return maxLength;
    }
};

int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;

    vector<int> nums(n);

    cout<<"Enter no.: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    Solution sol;
    cout<<"result: "<<sol.longestConsecutive(nums);
    return 0;
}
