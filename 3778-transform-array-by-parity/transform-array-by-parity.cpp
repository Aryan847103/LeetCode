class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) cnt++;
        }
        for(int i=0;i<nums.size();i++){
            if(cnt){
                nums[i]=0;
                cnt--;
            }
            else{
                nums[i]=1;
            }
        }
        return nums;
    }
};