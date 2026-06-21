class Solution {
    public boolean isPalindrome(String s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            char characterOnleft = s.charAt(i);
            char characterOnRight = s.charAt(j);
            if (!Character.isLetterOrDigit(characterOnleft)) {
                i += 1;
                continue;
            }
            if (!Character.isLetterOrDigit(characterOnRight)) {
                j -= 1;
                continue;
            }
            if (Character.toLowerCase(characterOnleft) != Character.toLowerCase(characterOnRight)) {
                return false;
            } else
                i += 1;
            j -= 1;
        }
        return true;
    }
}