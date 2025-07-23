class Solution {
public:

    // Method to return the beauties of all subarrays with length k.
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {

        // Total number of elements in nums
        int length = nums.size();

        // Frequency array with a size of 101, allowing for offset to handle negative numbers.
        vector<int> count(101, 0);

        // Initialize the count array with the first ‘k’ elements in nums.
        for (int i = 0; i < k; ++i) {
            count[nums[i] + 50]++;
        }

        // Result array to store beauty of each subarray of length k.
        vector<int> beautyValues(length - k + 1);

        // Store the beauty of the first subarray.
        beautyValues[0] = calculateBeauty(count, x);

        // Sliding window approach to calculate beauty for remaining subarrays of length k.
        for (int end = k, start = 1; end < length; ++end) {

            // Include the next element in the window and update its count.
            count[nums[end] + 50]++;

            // Exclude the element that is now outside the window and update its count.
            count[nums[end - k] + 50]--;

            // Calculate beauty for the new subarray and store it.
            beautyValues[start++] = calculateBeauty(count, x);
        }

        return beautyValues;
    }

private:

    // Helper method to calculate beauty using the frequency count array and value x.
    int calculateBeauty(vector<int>& count, int x) {

        int sum = 0;

        // Iterate over the count array to calculate cumulative sum.
        for (int i = 0; i < 50; ++i) {

            sum += count[i];

            // If the cumulative sum is at least x, return the value representing beauty.
            if (sum >= x) {
                return i - 50;
            }
        }

        // If beauty couldn't be determined within loop range, return 0.
        return 0;
    }
};