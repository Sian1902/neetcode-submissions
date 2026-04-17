public class Solution {
    public List<List<int>> ThreeSum(int[] nums) {
         List<List<int>> list = new List<List<int>>();
  Array.Sort(nums);
 
  for(int i=0; i<nums.Length; i++)
  {
      if (nums[i] > 0)
      {
          return list;
      }
      if (i>0 && nums[i] == nums[i - 1])
      {
          continue;
      }
      int l = i + 1; 
      int r = nums.Length-1;
      while (l < r)
      {
          if (nums[l] + nums[r] + nums[i]==0) { 
          list.Add(new List<int> { nums[i], nums[l], nums[r] });
              l++;
              r--;
              while (l < r && nums[l] == nums[l - 1])
              {
                  l++;
              }
          }
          else if (nums[l] + nums[r] + nums[i]< 0)
          {
              l++;
          }
          else
          {
              r--;
          }
      }
  }
  return list;
    }
}
