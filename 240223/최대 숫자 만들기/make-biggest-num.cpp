#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool cmp(int a, int b)
{
    return stoi(to_string(a)+to_string(b)) > stoi(to_string(b)+to_string(a));
}

int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr,arr+n,cmp);

    for (int i=0;i<n;i++) printf("%d",arr[i]);
    return 0;
}