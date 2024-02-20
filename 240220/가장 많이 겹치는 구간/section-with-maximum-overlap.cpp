#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n, x1, x2;

    scanf("%d", &n);

    int arr[200001];
    for (int i=0;i<200001;i++) arr[i] = 0;
    for (int i=0;i<n;i++) 
    {
        scanf("%d %d",&x1, &x2);
        arr[x1]++;
        arr[x2]--;
    }

    int answer = 0;
    for (int i=1;i<=200000;i++)
    {
        arr[i] = arr[i-1]+arr[i];
        if (answer < arr[i]) answer = arr[i];
    }
    printf("%d", answer);
    return 0;
}