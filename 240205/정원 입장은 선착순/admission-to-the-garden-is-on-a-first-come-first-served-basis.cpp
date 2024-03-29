#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

struct Comparator1 {
    bool operator()(tuple<int, int, int>& t1, tuple<int, int, int>& t2) {
        return get<0>(t1) > get<0>(t2);
     }
 };

struct Comparator2 {
    bool operator()(tuple<int, int, int>& t1, tuple<int, int, int>& t2) {
        return get<2>(t1) > get<2>(t2);
     }
 };

int main() {
    int N, a, t;
    scanf("%d",&N);

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, Comparator1> pq1;
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, Comparator2> pq2;

    for (int i=0;i<N;i++)
    {
        scanf("%d %d",&a, &t);
        pq1.push(make_tuple(a, t, i));
    }

    int time, answer;
    answer = 0;
    time = get<0>(pq1.top());
    
    while(true)
    {
        if (pq2.empty() && time < get<0>(pq1.top())) time = get<0>(pq1.top());
        while(!pq1.empty() && time>=get<0>(pq1.top()))
        {
            pq2.push(pq1.top());
            pq1.pop();
        }

        if (time > get<0>(pq2.top()))
        {
            if (answer < time-get<0>(pq2.top())) answer = time-get<0>(pq2.top());
        }
        else time = get<0>(pq2.top());
        time = time + get<1>(pq2.top());
        pq2.pop();
        if (pq1.empty() && pq2.empty()) break;
    }
    printf("%d", answer);
    return 0;
}