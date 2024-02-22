#include <iostream>

int main() {
    long long m, a, b;
    
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    int min = 1e9;
    int max = 0;

    for (int i=a;i<=b;i++)
    {
        long long mid;
        long long s = 1;
        long long e = m;
        int count = 0;

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
    printf("%d %d",min,max);
    return 0;
}