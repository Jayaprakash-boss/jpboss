#include <stdio.h>
int main()
{
    long long i;
    int cnt = 0;
    scanf("%lld", &i);
    while(i != 0)
    {
        i /= 10;
        ++cnt;
    }
    printf("%d", cnt);
return 0;
}
