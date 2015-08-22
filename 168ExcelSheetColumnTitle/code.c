char* convertToTitle(int n) {
/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/
    int maxLengthOfString = 99;
    char string[maxLengthOfString];
    int i = 0, j=0, resultOfDivision, resultOfModulo;
    for ( i = 0; n != 0; i ++ ) {
        resultOfDivision = n/26;
        resultOfModulo = n%26;
        if (resultOfModulo == 0) 
        {   resultOfDivision--;   resultOfModulo=26;   }
        string[i] = ( 'A'+resultOfModulo-1 );
        n = resultOfDivision;
    }
    string[i--] = '\0';
    char temp='0';
    while (j<i){
        temp = string[j];
        string[j] = string[i];
        string[i] = temp;
        j++;
        i--;
    }
    return string;
}