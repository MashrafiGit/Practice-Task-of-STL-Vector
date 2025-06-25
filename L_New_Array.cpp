#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> v3(n + n);

    v3 = v2;
    v3.insert(v3.begin() + n, v.begin(), v.end());

    for (int i : v3)
    {
        cout << i << " ";
    }

    return 0;
}