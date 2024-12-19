class Solution {
public:
    int reverse(int x) {
        // Handle an edge case when x = -2147483648
        if (x == numeric_limits<int>::min())
            return 0; 

        bool negative = (x < 0);
        int remainder, reversedNum=0; 
        x = abs(x);

        while(x) {
            remainder = x % 10;

            if (reversedNum > numeric_limits<int>::max() / 10 || 
                (reversedNum == numeric_limits<int>::max() / 10 && remainder > 7)) {
                return 0;
            }

            reversedNum = reversedNum * 10 + remainder;
            x = x / 10;
        }
        return negative ? (reversedNum * -1) : reversedNum;
    }
};
