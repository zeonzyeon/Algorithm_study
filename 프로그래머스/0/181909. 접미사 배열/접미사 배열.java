import java.util.Arrays;

class Solution {
    public String[] solution(String my_string) {
        int length = my_string.length();
        String[] suffix = new String[length];
        
        for(int i=0;i<length;i++)
            suffix[i]=my_string.substring(i);
        
        Arrays.sort(suffix);
        return suffix;
    }
}