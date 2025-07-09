#include<bits/stdc++.h>
int main(){
    // Input/output redirection
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,strFreq=0;
    std::cin>>n;
    if(n<2){
        std::cout<<"";
        return 0;
    }
    std::string curr,res;
    char inputChar,prevChar;
    std::unordered_map<std::string,int> freq;
    std::cin>>prevChar;
    for(int i=1;i<n;i++){
        std::cin>>inputChar;

        curr = "";
        curr+=prevChar;
        curr+=inputChar;
        freq[curr]++;

        if(freq[curr]>strFreq){
            res = curr;
            strFreq = freq[curr];
        }
        prevChar = inputChar;
    }
    std::cout<<res;
    return 0;
}