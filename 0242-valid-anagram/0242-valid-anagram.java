class Solution {
    public boolean isAnagram(String s, String t) {
        char [] cr = s.toCharArray();
        Arrays.sort(cr);
        String ans1 = String.valueOf(cr);
        char [] rc = t.toCharArray();
        Arrays.sort(rc);
        String ans2 = String.valueOf(rc);

        if(ans1.equals(ans2)){
            return true;
        }
        
        return false;
    }
}