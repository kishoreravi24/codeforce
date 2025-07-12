#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // code here
    int n;
    std::cin>>n;
    while(true){
        ++n;
        std::string y = std::to_string(n);
        std::set<char> digits(y.begin(),y.end());
        if(digits.size()==4){
            std::cout<<n;
            break;
        }
    }

    return 0;
}

/*

*/
