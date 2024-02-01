#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m, temp;
    set<int> sets;

    cin >> n >> m;

    for (int i=0;i<n;i++){
        cin >> temp; 
        sets.insert(temp);
    }

    for (int i=0;i<m;i++){
        cin >> temp;
        int min = -1;
        for (int num:sets){
            if (num<=temp)
                min = num;
            else
                break;
        }
        sets.erase(min);
        cout << min <<'\n';
    }

    return 0;
}