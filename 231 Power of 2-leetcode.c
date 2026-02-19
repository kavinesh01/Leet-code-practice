/*Example 2:

Input: n = 1
Output: true */


bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
