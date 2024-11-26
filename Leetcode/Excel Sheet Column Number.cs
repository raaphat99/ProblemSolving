public class Solution
{

    private int charOrder(char ch)
    {
        return ch - 'A' + 1;
    }

    public int TitleToNumber(string columnTitle)
    {

        int strLength = columnTitle.Length;
        int result = 0;
        for (int i = 0; i < strLength; i++)
        {
            result = result * 26 + charOrder(columnTitle[i]);
        }
        return result;
    }

}