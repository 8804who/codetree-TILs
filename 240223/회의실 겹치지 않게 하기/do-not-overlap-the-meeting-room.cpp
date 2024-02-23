#include <algorithm>
#include <iostream>

using namespace std;

bool cmp(pair<int,int> v1, pair<int,int> v2)
{
    return v1.second<v2.second;
}

int main() {
    vector<pair<int,int>> v;
    int n, s, e;
    scanf("%d",&n);

    for (int i=0;i<n;i++)
    {
        scanf("%d %d",&s,&e);
        v.push_back(make_pair(s,e));
    }

    sort(v.begin(),v.end(), cmp);

    int prev_end = 0, count = 0;
    for (int i=0;i<n;i++)
    {
        if (v[i].first>=prev_end)
        {
            count++;
            prev_end = v[i].second;
        }
    }
    printf("%d",n-count);
    return 0;
}