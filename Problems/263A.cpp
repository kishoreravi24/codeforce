#include <bits/stdc++.h>
using namespace std;

// codeForce 263A,Beautiful matrix

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // code here
    std::vector<std::vector<int>> matrix(5,std::vector<int>(5));
    std::pair<int,int> path;
    for(int i=0;i<5;++i){
        for(int j=0;j<5;++j){
            std::cin>>matrix[i][j];
            if(matrix[i][j]==1){
                path = {i,j};
            }
        }
    }

    // Do operation
    int count = abs(path.first - 2) + abs(path.second - 2);
    std::cout<<count;
    return 0;
}
