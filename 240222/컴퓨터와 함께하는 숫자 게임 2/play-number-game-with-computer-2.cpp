#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    long long m, a, b;
    
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    int min_answer = INT_MAX;
    int max_answer = INT_MIN;
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
            if(mid > i) e=mid-1;
            else s=mid+1;
        }
        min_answer=min(min_answer,count);
        max_answer=max(max_answer,count);
    }
    cout << min_answer << " " <<max_answer;
    return 0;
}