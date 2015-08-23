int mySqrt(int x) {
/*
Implement int sqrt(int x).

Compute and return the square root of x.
*/
    if (x<0)  return -1;
    int low = 0, high = 46340, middle = 0;
    while (low <= high) {
        middle = ( low + high )/2;
        if (middle*middle == x)
        {   break;   }
        if (middle*middle<x && (middle+1)*(middle+1)>x)
        {   break;   }
        else if (middle*middle > x)
        {   high = middle -1;   }
        else if (middle*middle < x)
        {   low = middle + 1;   }
    }
    return middle;
}