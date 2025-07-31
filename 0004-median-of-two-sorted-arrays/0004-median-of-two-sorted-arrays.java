class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] mergedArray = new int[nums1.length + nums2.length];
 
            System.arraycopy(nums1, 0, mergedArray, 0, nums1.length);
            System.arraycopy(nums2, 0, mergedArray, nums1.length, nums2.length);
            Arrays.sort(mergedArray);
            int start = 0;
            int end = mergedArray.length-1;
            int mid = (start + end) / 2;
            if (mergedArray.length%2==0){
             return (mergedArray[mid]+mergedArray[mid+1])/2.0;
            
            }else {
            return mergedArray[mid];
            }
}}