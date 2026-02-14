#include <bits/stdc++.h>

using namespace std;
#define f(n) for (int i = 0; i < n; i++)
#define f1(n) for (int i = 1; i < n; i++)
#define fj(n) for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
vector<vector<int>> v(10004);

int main()

{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i].empty())
        {
            sort(v[i].begin(), v[i].end(), greater<int>());
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        /* code */

        int scr;
        cin >> scr;

        if (v[scr].empty())
        {
            cout << -1;
        }
        else
            for (auto i = 0; i < v[scr].size(); i++)
            {
                cout << v[scr][i] << " ";
            }
        cout << endl;
    }

    return 0;
}
