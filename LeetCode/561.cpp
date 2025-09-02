#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i=i+2){
        ans+=nums[i];
    }
    return ans;
}
int main() {
    vector<int> nums={1,4,3,2};
    cout<<arrayPairSum(nums)<<endl;
    return 0;
}