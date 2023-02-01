/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(int x)
    {

        // if the Number is less than 0 then it won't be a palindrome

        if (x < 0)
            return false;

        // store the original number 'x in an another variable, as we will use it later on
        long int num = x, rev = 0, rem = 0;

        // Reverse the given number 'x'

        while (x != 0)
        {
            rem = x % 10;
            rev = (rev * 10) + rem;
            x /= 10;
        }

        // Compare the original number 'x' stored in variable 'num' with the reversed number 'rev'

        if (num == rev)
            return true; // If both are qqual then the number is Palindrome
        else
            return false;
    }
};
// @lc code=end
