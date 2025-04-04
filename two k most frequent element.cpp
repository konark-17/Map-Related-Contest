 #include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k){
    vector<int>result;

    if(nums.size()==1){
        result.push_back(nums[0]);
        return result;
    }
    sort(nums.begin(),nums.end());
    int count=1;
    for(int i=0;i<nums.size();i++){
        int a=nums[i];
        if(i>0 and nums[i]==nums[i-1]){
            count++;
            if(count==k){
                result.push_back(a);
            }
        }
        else if(i>0 and nums[i]!=nums[i-1]){
            count=1;
        }
    }
    return result;
}

int main(){
    int n,k;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter nos.: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout<<"Enter k: ";
    cin>>k;
    vector<int> result=topKFrequent(nums,k);
    cout<<"Result: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
    
