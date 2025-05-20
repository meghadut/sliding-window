//q. an array is given give the maximum subarray...

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int mx_sum=nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++){
            sum+=nums[i];
            if(sum<nums[i]){                // if the sum of previous along with i is smaller then i then we should not consider the
                                            // previous sums right.
                sum=nums[i];
            }
            mx_sum=max(sum,mx_sum);
        }
        return mx_sum;
    }
};
int main(){
    vector<int> nums;
    int n;
    cout<<"enter size";
    cin>>n;
    cout<<"enter elemts";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    Solution s;
    cout<<endl<<s.maxSubArray(nums);
}