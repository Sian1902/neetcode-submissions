public class Solution {
    public int LongestConsecutive(int[] nums) {
          HashSet<int> set = new HashSet<int>(nums);
  int longest = 0;
  foreach (int i in set)
  {
      int length = 1;
      
      while (set.Contains(i + length))
      {
          length++;
      }
      longest = Math.Max(length, longest);
  }
  return longest;
    }
}
 