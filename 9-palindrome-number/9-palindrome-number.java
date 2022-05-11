class Solution {
    public boolean isPalindrome(int x) {
        if(x==0) return true;
        if(x<0 || x%10==0) return false;
        
        int reversedNum = 0;
        while(x > reversedNum){
            reversedNum = (reversedNum*10) + x%10;
            x/=10;
        }
        if(x==reversedNum || reversedNum/10 == x) return true;
        else return false;
    }
}