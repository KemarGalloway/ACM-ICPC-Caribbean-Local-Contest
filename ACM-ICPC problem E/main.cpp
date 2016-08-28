#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = 0, m =0, sum;
    double result = 0;
    while(1)
    {
        sum = 0;
        cin >> n >> m;
        if(n == 0 && m == 0) break;

        for(int i = n; i <= m; i++)
        {
            for(int j =1; j <= i; j++)
            {
                if(i % j == 0)
                {
                    sum++;
                }
            }
          //  result = sqrtf(i);
          //  cout<<result<<endl;
        }
    }
    return 0;
}
