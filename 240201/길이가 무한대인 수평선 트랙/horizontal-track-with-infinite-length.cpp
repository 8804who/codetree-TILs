#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int answer = 1;
    int N, T;
    vector<pair<int, int>> v;

    

    int start, speed, end;
    cin >> N >> T;
    
    for (int i=0;i<N;i++){
        cin >> start >> speed;
        end = start + speed * T;
        v.push_back(pair<int, int>(start, end));
    }

    sort(v.begin(), v.end());
    
    int temp = v[N-1].second;

    for (int i=N-2;i>=0;i--){
        if (temp > v[i].second){
            answer++;
            temp = v[i].second;
        }
    }
        
    cout << answer;
    return 0;
}