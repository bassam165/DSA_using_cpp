class Solution {
public:
     int reverse(int x) {
        long int number = 0;
        while(x != 0){
            int  digit = x%10;
        if (number > (INT_MAX / 10) || (number == INT_MAX / 10 && digit > 7)) {
            return 0; 
        }
        if (number < (INT_MIN / 10) || (number == INT_MIN / 10 && digit < -8)) {
            return 0; 
        }
            number = number*10 + digit;
            x /= 10;
        }
        return number;
    }

    bool isPalindrome(int n) {
        if(n < 0) return false;
        int revn = reverse(n);
        return n == revn;
    }
};
