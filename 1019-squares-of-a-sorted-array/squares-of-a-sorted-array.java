class Solution {
    public int[] sortedSquares(int[] nums) {
      for(int iterator=0;iterator<nums.length;iterator++){
        nums[iterator]*=nums[iterator];
      } 
      Arrays.sort(nums);
      return nums; 
    }
}