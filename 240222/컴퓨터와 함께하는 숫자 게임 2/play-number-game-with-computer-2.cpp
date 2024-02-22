#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

// 변수 선언
long long m;
long long a, b;

int min_ans = INT_MAX;
int max_ans = INT_MIN;

int GetTryNum(long long target) {
    long long left = 1, right = m;
    int cnt = 0;
    while (left <= right) {
        long long mid = (left + right) / 2;
        cnt++;

        if(mid == target)
            return cnt;
        
        if(mid > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    // 입력
    cin >> m;
    cin >> a >> b;

    // 컴퓨터가 선택한 수를
    // a부터 b까지 각각 가정해보며
    // 그 중 최소 횟수와 최대 횟수를 구합니다.
    for(long long i = a; i <= b; i++) {
        // 이진탐색을 진행하여 진행 횟수를 구합니다.
        int num = GetTryNum(i);
        // 답을 갱신합니다.
        min_ans = min(min_ans, num);
        max_ans = max(max_ans, num);
    }

    cout << min_ans << " " << max_ans;
    return 0;
}