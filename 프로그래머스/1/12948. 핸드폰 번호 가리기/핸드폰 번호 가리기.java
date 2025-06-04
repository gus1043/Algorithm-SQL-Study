class Solution {
    public String solution(String phone_number) {
        String answer = "";
        int length=phone_number.length();
        String lastfour = phone_number.substring(length-4);
        answer = "*".repeat(length - 4)+lastfour;
        return answer;
    }
}