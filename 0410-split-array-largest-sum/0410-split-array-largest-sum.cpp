class Solution {
public:

    int func(vector<int>& nums,int n,int mid){
        int student=1,pagestudent=0;

        for(int i=0;i<n;i++){
            if(nums[i]+pagestudent<=mid){
                pagestudent+=nums[i];
            }
            else{
                student++;
                pagestudent=nums[i];
            }
        }
        return student;
    }

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

        if(k>n)
          return -1;

        while(low<=high){
            int mid=low+(high-low)/2;

            int students=func(nums,n,mid);

            if(students>k)
               low=mid+1;
            else
               high=mid-1;
        }
        return low;
    }
};