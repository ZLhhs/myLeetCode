int titleToNumber(char* s) {
    /*
	Given a column title as appear in an Excel sheet, return its corresponding column number.
    For example:
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
	*/
    int lengthOfString = strlen(s);
    int result = 0;
    for (int indexOfString = 0; indexOfString < lengthOfString; indexOfString ++) {
        result = ( result*26+(s[indexOfString]-'A'+1) );
    }
    return result;
}