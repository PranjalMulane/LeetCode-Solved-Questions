class Solution {
    public int titleToNumber(String columnTitle) {
	int count = 0;
	for(char ch : columnTitle.toCharArray()){
		count *= 26;
		count += Character.getNumericValue(ch) - Character.getNumericValue('A') + 1;
	}
	return count;
}
}