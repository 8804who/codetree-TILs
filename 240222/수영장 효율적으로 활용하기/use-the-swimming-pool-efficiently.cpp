#include <iostream>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];

    int s=1;
    int e=144000000;

    for (int i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i]>s) s=arr[i];
    }
    int answer = 144000000;
    
    while(s<=e)
    {
        int mid = (s+e)/2;
        int count = 1;
        int total = 0;
        for(int i=0;i<n;i++)
        {
            if (mid<total+arr[i]) 
            { 
                count++;
                total=arr[i];
            }
            else total+=arr[i];
        }
        if (count>m) s=mid+1;
        else
        {
            if (answer>mid) answer = mid;
            e=mid-1;
        }
    }

    printf("%d",answer);
    return 0;
}