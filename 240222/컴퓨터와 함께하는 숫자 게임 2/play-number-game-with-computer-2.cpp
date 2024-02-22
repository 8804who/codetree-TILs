#include <iostream>

int main() {
    int m, a, b;
    
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    int min = m;
    int max = 0;

    for (int i=a;i<=b;i++)
    {
        int mid;
        int s = 1;
        int e = m;
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