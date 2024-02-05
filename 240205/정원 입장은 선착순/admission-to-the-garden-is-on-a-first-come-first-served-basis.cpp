#include <iostream>
#include <tuple>
#include <vector>
#include <queue>

using namespace std;

struct Comparator {
    bool operator()(tuple<int, int, int>& t1, tuple<int, int, int>& t2) {
        if (get<0>(t1) == get<0>(t2)) return get<2>(t1) < get<2>(t2);
        else return get<0>(t1) < get<2>(t2);
     }
 };

int main() {
    int N, a, t;
    scanf("%d",&N);

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, Comparator> pq;
    for (int i=0;i<N;i++)
    {
        scanf("%d %d",&a, &t);
        pq.push(make_tuple(a, t, i));
    }

    printf("%d %d %d\n", get<0>(pq.top()),get<1>(pq.top()),get<2>(pq.top()));
    pq.pop();
    printf("%d %d %d\n", get<0>(pq.top()),get<1>(pq.top()),get<2>(pq.top()));
    pq.pop();
    printf("%d %d %d\n", get<0>(pq.top()),get<1>(pq.top()),get<2>(pq.top()));
    pq.pop();
    printf("%d %d %d\n", get<0>(pq.top()),get<1>(pq.top()),get<2>(pq.top()));
    pq.pop();
    printf("%d %d %d", get<0>(pq.top()),get<1>(pq.top()),get<2>(pq.top()));
    int time, wait, answer;
    answer = 0;
    time = 0;
    
    return 0;
}