import java.util.HashMap;

class Solution {
    public boolean wordPattern(String pattern, String s) {
        HashMap<Character, String> map = new HashMap<Character, String>();
        char[] charpat = pattern.toCharArray();
        String[] words = s.split(" ");
        map.put(charpat[0], words[0]);
        for (int i = 1; i < charpat.length; i++) {
            if (map.containsKey(charpat[i])) {
                if (map.get(charpat[i]) != words[i]) {
                    return false;
                }
            } else if (map.containsValue(words[i])) {
                return false;
            } else {
                map.put(charpat[i], words[i]);
            }
        }
        return true;
    }
}

public class WordPattern {
    public static void main(String[] args) {
        Solution solution = new Solution();
        boolean result = solution.wordPattern("abba", "dog cat cat dog");
        System.out.println(result);
    }
}