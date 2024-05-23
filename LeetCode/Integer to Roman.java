class Solution {
    private String generateRoman(String first, String fifth, String tenth, int realNum) {
        String result = "";

        if (realNum == 4) {
            result = first + fifth + result;
        } else if (realNum == 9) {
            result = first + tenth + result;
        } else if (realNum == 5) {
            result = fifth + result;
        } else {
            String temp = "";
            int temp2 = realNum;
            if (realNum > 5)
                temp2 = temp2 - 5;

            for (int j = 0; j < temp2; j++) {
                temp += first;
            }

            if (realNum > 5) {
                result = fifth + temp + result;
            } else {
                result = temp + result;
            }
        }
        return result;
    }

    public String intToRoman(int num) {
        int status = 0;
        String numRes = "";

        while (num > 0) {
            int realNum = num % 10;
            num = num / 10;
            status++;

            if (status == 1) {
                numRes = generateRoman("I", "V", "X", realNum) + numRes;
            }
            else if (status == 2) {
                numRes = generateRoman("X", "L", "C", realNum) + numRes;
            }
            else if (status == 3) {
                numRes = generateRoman("C", "D", "M", realNum) + numRes;
            } else if (status == 4) {
                numRes = generateRoman("M", "#", "#", realNum) + numRes;
            }
        }
        return numRes;
    }
}