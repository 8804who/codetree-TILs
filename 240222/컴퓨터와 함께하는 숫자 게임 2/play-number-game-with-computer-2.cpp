#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

long long m, a, b, s, e;

int min_answer = INT_MAX;
int max_answer = INT_MIN;

int main() {
    scanf("%lld",&m);
    scanf("%lld %lld",&a, &b);

    for (long long i=a;i<=b;i++)
    {
        s = 1;
        e = m;
        int count = 0;

        while (s<=e)
        {
            long long mid = (s+e)/2;
            count++;
            if (mid == i) break;
            else if (mid > i) e=mid-1;
            else s=mid+1;
        }

        min_answer=min(min_answer,count);
        max_answer=max(max_answer,count);
    }
    printf("%d %d",min_answer, max_answer);
    return 0;
}