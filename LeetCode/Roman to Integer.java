import java.util.HashMap;

class Solution {
    public int romanToInt(String s) {
        HashMap<Character, Integer> mapRoman = new HashMap<Character, Integer>()
        {{
            put('I', 1);
            put('V', 5);
            put('X', 10);
            put('L', 50);
            put('C', 100);
            put('D', 500);
            put('M', 1000);
        }};

        int result = 0;
        for(int i=0; i<s.length(); i++){
            if(i != s.length() - 1){
                if(s.charAt(i) == 'I'){
                    if(s.charAt(i+1) == 'V'){
                        result += (4);
                        i+=1;
                    }else if(s.charAt(i+1) == 'X'){
                        result += (9);
                        i+=1;
                    }else result += mapRoman.get(s.charAt(i));
                }else if(s.charAt(i) == 'X'){
                    if(s.charAt(i+1) == 'L'){
                        result += (40);
                        i+=1;
                    }else if(s.charAt(i+1) == 'C'){
                        result += (90);
                        i+=1;
                    }else result += mapRoman.get(s.charAt(i));
                }else if(s.charAt(i) == 'C'){
                    if(s.charAt(i+1) == 'D'){
                        result += (400);
                        i+=1;
                    }else if(s.charAt(i+1) == 'M'){
                        result += (900);
                        i+=1;
                    }else result += mapRoman.get(s.charAt(i));
                }else result += mapRoman.get(s.charAt(i));
            }
            else result += mapRoman.get(s.charAt(i));
        }
        return result;
    }
}