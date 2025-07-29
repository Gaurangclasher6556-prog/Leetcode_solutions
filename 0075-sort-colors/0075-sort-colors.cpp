class Solution {
public:
    void merge(vector<int>& nums , int l , int mid , int r)
    {
        vector<int> temp ; 
        int left = l , right = mid + 1 ;
        while(left <= mid && right <= r)
        {
            if(nums[left] <= nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }    
            while(left <= mid)
            {
                temp.push_back(nums[left]);
                left++;
            }
            while(right <= r)
            {
                temp.push_back(nums[right]);
                right++;
            }
            for(int i = l ; i <= r ; i++)
            {
                nums[i] = temp[i-l];
            }
        }
    
    void merge_Sort(vector<int>& nums , int l , int r )
    {
        if(l == r ) return ; 
        int mid = (l+r)/2 ;
        merge_Sort(nums , l , mid);
        merge_Sort(nums , mid + 1 , r);
        merge(nums , l , mid , r);
    }
    void sortColors(vector<int>& nums) {
        merge_Sort(nums , 0 , nums.size() - 1);
         }
  };     
