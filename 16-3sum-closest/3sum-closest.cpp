class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int min_diff=INT_MAX;
        int close_sum=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            int sum=0;
            int diff=0;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                diff=abs(sum-target);
                if(min_diff>diff){
                    close_sum=sum;
                    min_diff=diff;
                }
                if(sum>target){
                    k--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    return sum;
                }
            }
        }
        return close_sum;
    }
};  