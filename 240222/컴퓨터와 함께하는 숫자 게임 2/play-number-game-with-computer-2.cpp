#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

long long m;
long long a, b;

int GetTryNum(long long target)
{
    long long s = 1;
    long long e = m;
    int count = 0;

    while (s<=e)
    {
        long long mid = (s+e)/2;
        count++;
        if (mid == target) return count;
        if(mid > target) e=mid-1;
        else s=mid+1;
    }
    return -1;
}

int main() {
    cin >> m;
    cin >> a >> b;

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