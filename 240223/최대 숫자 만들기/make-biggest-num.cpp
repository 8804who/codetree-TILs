#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool cmp(long long a, long long b)
{
    return stoll(to_string(a)+to_string(b)) > stoll(to_string(b)+to_string(a));
}

int main() {
    int n;
    scanf("%d",&n);

    long long arr[n];
    for (int i=0;i<n;i++) scanf("%lld",&arr[i]);
    sort(arr,arr+n,cmp);

    for (int i=0;i<n;i++) printf("%lld",arr[i]);
    return 0;
}