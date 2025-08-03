class Solution {
public:
    bool isPowerOfFour(int n) {
        long long power = 1;
        while (power <= n) 
        {
            if (power == n) 
            {
                return true;
            } else
                power = power * 4;
        }
        return false;
        }
    };