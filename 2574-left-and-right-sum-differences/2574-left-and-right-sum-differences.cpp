class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int totalsum=0;
        int leftsum=0;

        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        vector<int>ans;

        for(int i=0;i<n;i++){
            int rightsum=totalsum-leftsum-nums[i];
            ans.push_back(abs(rightsum-leftsum));

            leftsum+=nums[i];
        }
        return ans;
    }
};