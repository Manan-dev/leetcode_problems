class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int temp = x;
        int rem = 0;
        long long int reverse = 0;
        while (temp != 0){
            rem = temp % 10;
            reverse = reverse * 10 + rem;
            temp = temp/10;
        }
        if (reverse == x) return true;
        else return false;
    }
};