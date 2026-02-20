/*
Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
*/
  int subtractProductAndSum(int n) {
    int sum=0,product=1;
    while(n>0){
        int remainder=n%10;
        sum+=remainder;
        product=product*remainder;
        n=n/10;
    }
   n=product-sum;
    return n;
}
