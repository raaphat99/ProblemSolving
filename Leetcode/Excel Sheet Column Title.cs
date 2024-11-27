public class Solution {
    public string ConvertToTitle(int columnNumber) {
            int rem;
            StringBuilder sb = new StringBuilder();
            while (columnNumber != 0)
            {
                rem = columnNumber % 26;
                if (rem == 0) {
                    sb.Append('Z');
                    columnNumber = (columnNumber-1) / 26;
                }
                else {
                    sb.Append((char)(rem + 64));
                    columnNumber = columnNumber / 26;
                }
            }
            return new string(sb.ToString().Reverse().ToArray());
    }
}
