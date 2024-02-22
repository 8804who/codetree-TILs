#include <iostream>

int main() {
    long long m, a, b;
    
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    int min_answer = 1e9;
    int max_answer = 0;
    int count;
    long long mid;
    long long s;
    long long e;

    for (long long i=a;i<=b;i++)
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
        if (count<min_answer) min_answer=count;
        if (count>max_answer) max_answer=count;
    }
    printf("%d %d",min_answer,max_answer);
    return 0;
}