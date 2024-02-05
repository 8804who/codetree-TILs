#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, a, t;
    scanf("%d",&N);

    vector<pair<int, int>> arr;

    for (int i=0;i<N;i++)
    {
        scanf("%d %d",&a, &t);
        arr.push_back(a, t);
        printf("%d, %d", arr[i]);
    }
    return 0;
}