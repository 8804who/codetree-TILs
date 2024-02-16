#include <iostream>
#include <cstdlib>

using namespace std;

int get_distance(int p1[], int p2[]){
	return abs(p1[0]-p2[0])+abs(p1[1]-p2[1]);
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N][2];
    int left[N];
    int right[N];
    for (int i=0;i<N;i++)
    {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i=0;i<N;i++)
    {
        left[i] = 0;
        right[i] = 0;
    }

    for (int i=1;i<N;i++)
    {
        left[i] = get_distance(arr[i-1], arr[i])+left[i-1];
    }

    for (int i=N-2;i>0;i--)
    {
        right[i] = get_distance(arr[i], arr[i+1])+right[i+1]; 
    }

    int answer = 1e9;

    for (int i=1;i<N-1;i++)
    {
        if (answer > left[i-1]+right[i+1]+get_distance(arr[i-1], arr[i+1]))
            answer = left[i-1]+right[i+1]+get_distance(arr[i-1], arr[i+1]);
    }
    printf("%d", answer);
    return 0;
}