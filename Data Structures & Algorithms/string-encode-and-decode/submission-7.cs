public class Solution {

    public string Encode(IList<string> strs) {
         StringBuilder sb = new StringBuilder();
 foreach(var s in strs)
 {
     sb.Append($"{s.Length}#{s}");
 }
 string stor= sb.ToString();
  return stor;
    }

    public List<string> Decode(string s) {
         List<string> result = new List<string>();
 int i = 0;
 while(i < s.Length){
     int j = i;
     while (s[j]!='#')
     {
         j++;
     }
     int.TryParse(s.Substring(i,j-i), out var len );
     j++;
     result.Add(s.Substring(j,len));
     i = j+len;
 }
 return result;
   }
}
