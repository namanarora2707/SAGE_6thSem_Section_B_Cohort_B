#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k){
                cnt++;
            }
        }
    }
    return cnt;
}
int main() {
    vector<int> nums={1,1,1};
    cout<<subarraySum(nums,2)<<endl;
    return 0;
}