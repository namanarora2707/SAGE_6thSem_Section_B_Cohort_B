#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n and j<=i+k;j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main() {
    vector<int> nums={1,2,3,1};
    cout<<containsNearbyDuplicate(nums,3)<<endl;
    return 0;
}