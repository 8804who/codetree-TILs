#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

long long m, a, b;
long long mid;
long long s;
long long e;

int GetTryNum(long long target)
{
    s = 1;
    e = m;
    int count = 0;

    while (s<=e)
    {
        mid = (s+e)/2;
        count++;
        if (mid == target) return count;
        if(mid > target) e=mid-1;
        else s=mid+1;
    }
    return -1;
}

int main() {
    scanf("%d",&m);
    scanf("%d %d",&a, &b);

    int min_answer = INT_MAX;
    int max_answer = INT_MIN;
    

    for (long long i=a;i<=b;i++)
    {
        int count = GetTryNum(i);
        min_answer=min(min_answer,count);
        max_answer=max(max_answer,count);
    }
    cout << min_answer << " " <<max_answer;
    return 0;
}