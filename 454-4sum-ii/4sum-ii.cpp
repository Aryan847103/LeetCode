class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    sort(nums3.begin(),nums3.end());
    sort(nums4.begin(),nums4.end());
    int n=nums1.size();
    int k,l;
    int sum=0;
    int cnt=0;
    unordered_map<int,int> mp;
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            int req=nums3[k]+nums4[l];
            mp[req]++;
        }
    }
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            int sum=-(nums1[i]+nums2[j]);
            if(mp.find(sum)!=mp.end()){
                cnt+=mp[sum];
            }
        }
    }
    return cnt;
    }
};