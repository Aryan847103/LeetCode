class Solution {
public:
        bool isMonotonic(vector<int>& nums) {
        int check=0;
        bool flag=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                check=nums[i]-nums[i-1];
            }
            else{
                continue;
            }
        }
        if(check==0) return true;
        else if(check>0){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<=nums[i+1]){
                    flag=true;
                    continue;
                }
                else return false;
            }
            if(flag){
                return true;
            }
        }
        else{
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>=nums[i+1]){
                    flag=true;
                    continue;
                }
                else return false;
            }
            if(flag){
                return true;
            }
        }
        return true;
    }
};