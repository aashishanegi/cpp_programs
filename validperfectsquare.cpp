class Solution {
public:
    bool isPerfectSquare(int num) {
        long long q = num / 4;  // Use long long to avoid overflow
        long long i = 1;        // Use long long for i as well
        while (i * i <= num) {  // Check if i*i exceeds num to avoid overflow
            if (i * i == num) {
                return true;
            } else {
                i++;
            }
        }
        return false;
    }
};
