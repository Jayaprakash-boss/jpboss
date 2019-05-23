#include <stdio.h>
    void main()
    {
 int i, j, temp, a, b[50];
        scanf("%d", &a);
        for (i = 0; i < a; i++)
            scanf("%d", &b[i]);
 for (i = 0; i < a; i++) 
        {
            for (j = i + 1; j < a; j++)
            {
                if (b[i] > b[j]) 
                {
                    temp =  b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }
 for (i = 0; i < a; i++)
            printf("%d ", b[i]);
 }
