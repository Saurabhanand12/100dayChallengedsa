// class Solution {
// public:
//     int firstUniqChar(string s) {
//         vector<int> freq(26,0);
//         queue<pair<char,int>> q;

//         for(int i=0;i<s.size();i++){
//             freq[s[i]-'a']++;
//             q.push({s[i],i});
//         }

//         while(q.size() > 0 && freq[q.front().first -'a'] > 1) q.pop();

//         if(q.empty()) return -1;
//         return q.front().second;
//     }
// };