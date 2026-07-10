class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int pre_sum=0;
        int remainder=0;
        unordered_map<int,int> mp;
        mp[remainder]=-1;
        for(int i=0;i<nums.size();i++){
            pre_sum+=nums[i];
            remainder=pre_sum%k;
            if(mp.find(remainder)!=mp.end()){
                if((i-mp[remainder])>=2) return true;
            }
            else{
                mp[remainder]=i;
            }
        }
        return false;
    }
};