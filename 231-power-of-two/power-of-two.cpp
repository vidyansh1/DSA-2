class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long pow = 1;
        while (pow <= n) 
        {
            if (pow == n) 
            {
                return true;
            } else
                pow = pow * 2;
        }
        return false;
        }
    };