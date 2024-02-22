#include <iostream>

int main() {
    long long m, a, b;
    
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    long long min = m;
    long long max = 0;

    for (int i=a;i<=b;i++)
    {
        long long mid;
        long long s = 1;
        long long e = m;
        long long count = 0;

        while (s<=e)
        {
            mid = (s+e)/2;
            count++;
            if (mid == i) break;
            else if(mid > i) e=mid-1;
            else s=mid+1;
        }
        if (count<min) min=count;
        if (count>max) max=count;
    }
    printf("%lld %lld",min,max);
    return 0;
}