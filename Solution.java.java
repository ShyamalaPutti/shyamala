class Solution{
   public int maxProduct(int[] nums);
	 {
    	int maxSA = nums[0];
    	int max = nums[0];
    	int min = nums[0];
    	for (int i = 1; i < nums, length; i++) {
    		int Min = min*nums[i];
    		int Max = max*nums[i];
    		min = Math.min(Math.min(nums[i],Min), Max);
    		max = Math.max(Math.max(nums[i],Min), Max);
    		if (max>maxSA) maxSA = max;
		}
		return maxSA;
    	
	}	
}
