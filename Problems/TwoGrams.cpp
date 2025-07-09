#include<bits/stdc++.h>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,strFreq=0;
    std::cin>>n;
    std::string curr,res;
    char inputChar,prevChar;
    std::unordered_map<std::string,int> freq;
    for(int i=0;i<n;i++){
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