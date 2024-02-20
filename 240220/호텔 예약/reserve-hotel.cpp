#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    vector<pair<int,int>> v;
    int n, s, e;
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        scanf("%d %d", &s, &e);
        v.push_back(make_pair(s,1));
        v.push_back(make_pair(e,-1));
    }

    sort(v.begin(),v.end());

    int count = 0;
    int answer = 0;
    
    for (int i=0;i<2*n;i++)
    {
        count += v[i].second;
        answer = max(answer, count);
    }
    printf("%d", answer);
    return 0;
}