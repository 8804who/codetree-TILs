#include <algorithm>
#include <iostream>


using namespace std;

int main() {
    int n, x1, x2;
    vector<pair<int, int>> v;
    scanf("%d", &n);

    int arr[200001];
    for (int i=0;i<200001;i++) arr[i] = 0;
    for (int i=0;i<n;i++) 
    {
        scanf("%d %d",&x1, &x2);
        v.push_back(make_pair(x1,1));
        v.push_back(make_pair(x2,-1));
    }

    sort(v.begin(),v.end());

    int count = 0;
    int answer = 0;
    for (int i=0;i<2*n;i++)
    {
        int x, val;
        tie(x, val) = v[i];

        if (val==1 && count == 0) answer++;
        count += val;
    }
    printf("%d", answer);
    return 0;
}