#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // code here
    int n,t;
    std::cin>>n>>t;
    std::vector<char> queue;
    for(int i=0;i<n;i++){
        char G;
        std::cin>>G;
        queue.push_back(G);
    }
    std::vector<int> path;
    while(t--){
        for(int i=1;i<n;i++){
            if(queue[i-1]=='B'&&queue[i]=='G'){
                path.push_back(i);
            }
        }
        for(int i=0;i<path.size();++i){
            int index = path[i];
            std::swap(queue[index],queue[index-1]);
        }
        path.clear();
    }

    for(char ch:queue){
        std::cout<<ch;
    }
    return 0;
}


// optimize

#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // code here
    int n,t;
    std::cin>>n>>t;
    
    std::string queue;
    std::cin>>queue;

    while(t--){
        for(int i=0;i<n-1;++i){
            if(queue[i]=='B'&&queue[i+1]=='G'){
                std::swap(queue[i],queue[i+1]);
                ++i;
            }
        }
    }

    std::cout<<queue;
    return 0;
}

/*
5 2
BGGBG
GBGBG

*/
