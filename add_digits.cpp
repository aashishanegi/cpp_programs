class Solution {
public:
    int addDigits(int num) {
        int rem = 0, sum = 0;
        if(num >= 0 && num <= 9)
        {
            return num;
        }
        
        while(num != 0)
        {
            rem = num % 10;
            sum += rem;
            num = num / 10;
        }
        return addDigits(sum);
    }
};
