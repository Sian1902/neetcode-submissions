public class Solution {
    public int MaxArea(int[] heights) {
        int max = 0;
 int capacity; 
 for(int i=0; i<heights.Length; i++)
 {
     for(int j =i+1;j<heights.Length; j++)
     {
         capacity=heights[j]< heights [i]? heights[j]*Math.Abs(i-j) :heights[i] * Math.Abs(i - j);
         max = Math.Max(max, capacity);
     }
 }
 return max; 
    }
}
