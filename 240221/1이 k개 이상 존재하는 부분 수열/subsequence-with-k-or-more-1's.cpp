#include <iostream>

int main() {
    int n, k;
    int arr[n];

    scanf("%d %d",&n, &k);

    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int s = 0;
    int e = 0;
    int count = arr[0]==1 ? 1:0;
    int answer = -1;
    while (s<=e)
    {
        if (count >= k)
        {
            if (answer == -1 || answer > e-s+1) answer = e-s+1;
            if (arr[s] == 1) count--;
            s++;
        }
        else
        {
            e++;
            if(e==n) break;
            if(arr[e]==1) count++;
        }
    }
    printf("%d",answer);
    return 0;
}