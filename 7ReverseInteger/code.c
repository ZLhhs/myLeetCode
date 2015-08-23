int reverse(int x) {
/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321
*/
    int flag = 0;
    if (x<0)
    {    flag = 1;    }
    int maxLength = 20;
    int note[maxLength];
    int i = 0, j=0;
    while (x != 0) {
        if (flag)
        {   note[i++] = -(x%10);   }
        else note[i++] = x%10;
        x /= 10;
    }
    long answer = 0;
    while (j<i) {
        answer = answer*10 + note[j];
        j++;
    }
    if (answer>2147483647) return 0;
    return flag ? -answer : answer ;
}