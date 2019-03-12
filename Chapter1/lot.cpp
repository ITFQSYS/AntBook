#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n;
    cin >> m;

    vector<int> k(n);

    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
    }

    bool flag = false;

    for (int a = 0; a < n && !flag; a++)
    {
        for (int b = 0; b < n && !flag; b++)
        {
            for (int c = 0; c < n && !flag; c++)
            {
                for (int d = 0; d < n && !flag; d++)
                {
                    if (k[a] + k[b] + k[c] + k[d] == m)
                    {
                        flag = true;
                    }
                }
            }
        }
    }

    if(flag)
    {
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}