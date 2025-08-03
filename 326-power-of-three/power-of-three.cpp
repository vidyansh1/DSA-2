class Solution {
public:
    bool isPowerOfThree(int n) {
        long long pow = 1;
        while (pow <= n) 
        {
            if (pow == n) 
            {
                return true;
            } else
                pow = pow * 3;
        }
        return false;
        }
    };