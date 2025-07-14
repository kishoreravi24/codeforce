#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // code here
    int grid[3][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };


    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            int press;
            std::cin>>press;
            if(press!=0 && (press&1) != 0){
                grid[i][j] ^= 1;
                // grid[i-1][j] = (grid[i-1][j] == 0) ? 1 : 0;  or grid[i-1][j] ^=1;
                if(i-1>=0){ grid[i-1][j] ^=1; } // up
                if(i+1<3){ grid[i+1][j] ^=1; } // down
                if(j-1>=0){ grid[i][j-1] ^=1; } // left
                if(j+1<3){ grid[i][j+1] ^=1; } // right
            }
        }
    }

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            std::cout<<grid[i][j];
        }
        std::cout<<"\n";
    }



    return 0;
}

/*

*/
