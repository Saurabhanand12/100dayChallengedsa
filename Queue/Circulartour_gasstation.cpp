// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int tolgas = 0 ,tolcost = 0;

//         for(int i=0;i<gas.size();i++){
//             tolgas += gas[i];
//         }

//         for(int i=0 ; i<cost.size();i++){         //tc =o(n) sp = o(1)
//             tolcost += cost[i];
//         }

//         if(tolgas < tolcost) return -1;

//         int start=0,currgas=0;

//         for(int i=0;i<gas.size();i++){
//             currgas += (gas[i] - cost[i]);

//             if(currgas < 0){
//                start = i+1;
//                currgas =0;
//             }
//         }
//         return start;
//     }
// };

////////////////////
// using queue 
// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//     queue<int> q;
//     int currFuel = 0, totalFuel = 0;
//     int n = gas.size();

//     for(int i = 0; i < n; i++) {
//         int net = gas[i] - cost[i];
//         totalFuel += net;
//         currFuel += net;
//         q.push(i);

//         while(!q.empty() && currFuel < 0) {
//             int idx = q.front();
//             q.pop();
//             currFuel -= (gas[idx] - cost[idx]);
//         }
//     }

//     if(totalFuel < 0 || q.empty())  return -1;

//     return q.front();
//     }
// };