#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, temp, min;
    set<int> sets;

    cin >> n >> m;

    for (int i=0;i<n;i++){
        cin >> temp; 
        sets.insert(temp);
    }

    for (int i=0;i<m;i++){
        cin >> temp;
        auto it = sets.upper_bound(temp);
        if (it == sets.begin()){
            cout << "-1" << endl;
        }
        else{
            it--;
            cout << *it << endl;
            sets.erase(*it);
        }
    }

    return 0;
}