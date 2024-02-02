#include <iostream>
#include <queue>
#include <cstdio>
#include <functional>
using namespace std;

int main() {
    
    int t, m, num;
    scanf("%d",&t);

    for (int test_case=0;test_case<t;test_case++)
    {
        priority_queue<int, vector<int>, less<int>> q1;
        priority_queue<int, vector<int>, greater<int>> q2;
        scanf("%d",&m);

        for (int i=0;i<m;i++)
        {   
            scanf("%d",&num);
            if (q1.size() == 0 || num < q1.top()) q1.push(num);
            else q2.push(num);

            if (i%2 == 0)
            {
                while (q1.size() != q2.size()+1)
                {
                    if (q1.size() > q2.size()+1) 
                    {
                        q2.push(q1.top());
                        q1.pop();
                    }
                    else 
                    {
                        q1.push(q2.top());
                        q2.pop();
                    }
                }
                printf("%d ",q1.top());
            }
        }
        printf("\n");
    }
    return 0;
}