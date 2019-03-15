#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> a(n);
    int max_perimeter = 0;

    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i+1; j < a.size(); j++)
        {
            for (int k = j+1; k < a.size(); k++)
            {
                if (max(a[i], max(a[j], a[k])) <= a[i] + a[j] + a[k] - max(a[i], max(a[j], a[k])))
                {
                    max_perimeter = a[i] + a[j] + a[k];
                }
            }
        }
    }

    cout << max_perimeter << endl;

    return 0;
}