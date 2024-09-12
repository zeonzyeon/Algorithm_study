class Solution {
    public int solution(int a, int b) {
        String result = Integer.toString(a) + Integer.toString(b);
        int result1 = Integer.parseInt(result);
        int result2 = 2*a*b;
        
        return result1 >= result2 ? result1 : result2;
    }
}