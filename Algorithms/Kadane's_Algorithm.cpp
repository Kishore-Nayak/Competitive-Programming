//53. Maximum Subarray
#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& v){
    int ans = INT_MIN;  //max sum of subarray
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
        ans = max(ans,sum); //if sum is greater than ans, update it
        if(sum < 0) sum = 0;    //carry the sum if it is positive
    }
    return ans;
}

int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<"Maximum Subarray Sum: "<<maxSubArray(nums)<<endl;
    return 0;
}