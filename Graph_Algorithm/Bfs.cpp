#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> g[N];

int vis[N];

void bfs(int start)
{
     queue<int> q;
     q.push(start);
     vis[start] = 1;

     while (!q.empty())
     {
          int cur_v = q.front();
          q.pop();
          cout << cur_v << " ";
          for (int child : g[cur_v])
          {
               if (!vis[child])
               {
                    q.push(child);
                    vis[child] = 1;
               }
          }
     }
}

int main()
{

     int n, m;
     cout << "Enter number of vertex :";

     cin >> n;
     cout << "Enter number of edges :";
     cin >> m;

     for (int i = 0; i < m; ++i)
     {
          int x, y;
          cin >> x >> y;
          g[x].push_back(y);
          g[y].push_back(x);
     }

     bfs(1);
}
