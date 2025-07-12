#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // code here
    std::string s;
    std::cin>>s;
    std::unordered_map<std::string,int> checker = {
        {".",0},
        {"-.",1},
        {"--",2}
    };
    std::string res="",curr="";
    for(char ch:s){
        curr+=std::string("")+ch;
        if(checker.find(curr)!=checker.end()){
            std::cout<<checker[curr];
            curr="";
        }
    }
    return 0;
}

/*

*/
