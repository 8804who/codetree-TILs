#include <iostream>

int main() {
    long long m, a, b;
    
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    int min = 1e9;
    int max = 0;
    int count;
    long long mid;
    long long s;
    long long e;

    for (int i=a;i<=b;i++)
    {
        s = 1;
        e = m;
        count = 0;

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