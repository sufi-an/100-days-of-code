#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{

    int test, temp;
    cin >> test;

    for (int t = 0; t < test; t++)
    {

        int n, m, k;
        cin >> n >> m >> k;

        vector<int> arr_n;
        vector<int> arr_m;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp < k)
            {
                arr_n.push_back(temp);
            }
        }

        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            if (temp < k)
            {
                arr_m.push_back(temp);
            }
        }

        sort(arr_n.begin(), arr_n.end());
        sort(arr_m.begin(), arr_m.end());

        int c = 0;
        for (auto i = arr_n.begin(); i != arr_n.end(); ++i)
        {
            for (auto j = arr_m.begin(); j != arr_m.end(); ++j)
            {
                if (*i + *j <= k)
                {
                    c++;
                }
            }
        }

        cout << c << endl;
    }
}