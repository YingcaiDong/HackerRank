#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int max(int a, int b)
{
    int max;
    if(a >= b)
    {
        max = a;
    } else if(a < b)
    {
        max = b;
    }
    return max;
}

int main() {
    int q, n;
    scanf("%d", &q);
    
    int i1,i2,i3;
    for(i1 = 0; i1 < q; i1++)
    {
        scanf("%d", &n); // store n each loop
        int array[2*n][2*n];
        for(i2 = 0; i2 < 2*n; i2++)
        {
            for(i3 = 0; i3 < 2*n; i3++)
            {
                scanf("%d", &array[i2][i3]);
            }
        }
        
        int maxNum = 0;
        int sum = 0;
        for(i2 = 0; i2 < n; i2++)
        {
            for(i3 = 0; i3 < n; i3++)
            {
                maxNum = max(array[i2][i3], max(array[2*n-i2-1][i3], array[i2][2*n-i3-1]));
                maxNum = max(maxNum, array[2*n-i2-1][2*n-i3-1]);
                sum += maxNum;
            }
        }
        printf("%d\n", sum);
    } 
    return 0;
}
