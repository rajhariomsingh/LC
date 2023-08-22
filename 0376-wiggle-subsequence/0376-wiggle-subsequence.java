class Solution {
    public int wiggleMaxLength(int[] nums) {
        if (nums.length <= 1)
            return nums.length;

        int count = 1;
        int pd = 0, m = 0, n = 1;
        
        while (n == 1 && m < nums.length - 1) {
            if (nums[m] > nums[m + 1]) {
                pd = 1;
                n = 0;
            } else if (nums[m] < nums[m + 1]) {
                pd = -1;
                n = 0;
            }
            m++;
            if (m == nums.length-1&&pd==0)
            return 1;
        }

        if (m == nums.length)
            return 1;

        for (int i = 1; i < nums.length - 1; i++) {
            int nd = nums[i] - nums[i + 1];
            if (nd == 0)
                continue;
            if ((pd == 0 && nd != 0) || (pd != 0 && pd * nd < 0)) {
                count++;
                pd = nd;
            }
        }

        return count + 1;
    }
}
