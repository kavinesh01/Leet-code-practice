/*Example 1:

Input: x = 121
Output: true  */

bool isPalindrome(int x) {
    if (x < 0)
        return false;

    int original = x;
     long n = 0, remainder;

    while (x != 0) {
        remainder = x % 10;
        n = n * 10 + remainder;
        x = x / 10;
    }

    return (n == original);
}
