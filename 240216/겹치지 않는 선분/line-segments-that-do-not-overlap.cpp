#include <algorithm>
#include <iostream>


using namespace std;

int N, x1, x2, answer;
vector<pair<int, int>> v;

int main() {
    scanf("%d", &N);
    answer = 0;

    int left[N];
    int right[N];

    for (int i=0;i<N;i++)
    {
        scanf("%d %d", &x1, &x2);
        v.push_back(make_pair(x1, x2));
    }
    sort(v.begin(), v.end());

    
    left[0]=v[0].second;
    right[N-1]=v[N-1].second;

    for (int i=1;i<N;i++)
        left[i]=max(left[i-1], v[i].second);
    for (int i=N-2;i>=0;i--)
        right[i]=min(right[i+1],v[i].second);
    for (int i=0;i<N;i++)
    {
        if (left[i] == right[i])
            answer++;
    }
    printf("%d", answer);
    return 0;
}