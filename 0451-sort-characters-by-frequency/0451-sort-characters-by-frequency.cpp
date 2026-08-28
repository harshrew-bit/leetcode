class Solution {
public:
    string frequencySort(string s) {
    int n = s.size();
    string ans="";
    unordered_map<char,int>mpp;
    
    for(char x:s){
        mpp[x]++;
    } 
    priority_queue<pair<int,char>>p;
    for(auto it:mpp){
        p.push({it.second,it.first});
    }
    while(!p.empty()){
        int freq=p.top().first;
        char ch= p.top().second;
        while(freq){
            ans+=ch;
            freq--;
        }
        p.pop();
    }  
    return ans;
    }
};