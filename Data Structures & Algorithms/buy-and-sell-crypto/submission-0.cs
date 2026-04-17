public class Solution {
    public int MaxProfit(int[] prices) {
         int l = 0;
 int r = 1;
 int maxProf = 0;
 while (r < prices.Length)
 {
     if (prices[l] < prices[r])
     {
         if (prices[r] - prices[l] > maxProf)
         {
             maxProf = prices[r] - prices[l];
         }
         r++;
     }
     else
     {
         l = r;
         r++;
     }
 }
 return maxProf;
    }
}
