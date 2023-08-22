class Solution {
    public int wiggleMaxLength(int[] nums) {
        int length = nums.length;
        if (length == 0 || length == 1)
            return length;

        int count = 1;
        int prevDiff = nums[1] - nums[0];

        if (prevDiff != 0)
            count = 2;

        for (int i = 2; i < length; i++) {
            int currentDiff = nums[i] - nums[i - 1];
            if ((currentDiff > 0 && prevDiff <= 0) || (currentDiff < 0 && prevDiff >= 0)) {
                count++;
                prevDiff = currentDiff;
            }
        }

        return count;
    }
}
