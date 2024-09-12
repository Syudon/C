#include <stdio.h>

void main()


{
    long int factorielle(int N)
    {
        if (N==0)
            return 1;
        else
            return N*factorielle(N-1);
    }
}
