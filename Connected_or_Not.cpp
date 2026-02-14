#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(),x.end());
#define ll long long
int vis[1005][1004];

 int main()

{
    int n,e;
    cin>>n>>e;
  
  
     for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        
        vis[a][b] = true;
        
    }
   int Q;
    cin >> Q;
    while (Q--) {
        int src, dst;
        cin >> src >> dst;
        if(src==dst)
        {
            cout << "YES" << endl;
        }

        else if (vis[src][dst]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }




    return 0;
}