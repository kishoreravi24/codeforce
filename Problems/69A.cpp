#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    while (n--) {
        int xi, yj, zk;
        cin >> xi >> yj >> zk;
        x += xi;
        y += yj;
        z += zk;
    }

    cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << '\n';
    return 0;
}
