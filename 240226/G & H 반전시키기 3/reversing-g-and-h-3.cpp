#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);

    char s1[n];
    char s2[n];
    int nums[n];

    scanf("%s",s1);
    scanf("%s",s2);

    for (int i=0;i<n;i++) 
    {
        if (s1[i]!=s2[i]) nums[i]=1;
        else nums[i] = 0;
    }
    int count = 0;
    int answer = 0;
    for (int i=0;i<n;i++)
    {   
        if(nums[i] == 1)
        {
            count++;
            if (count == 4)
            {
                answer++;
                count = 0;
            }
        }
        else
        {
            if (count>0)
            {
                answer++;
                count = 0;
            }
        }
    }
    if (count>0) answer++;
    printf("%d", answer);
    return 0;
}