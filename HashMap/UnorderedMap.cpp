// #include<iostream>
// #include<unordered_map>
// using namespace std;

// int main() {
//     unordered_map<string,int> mp;

//     pair<string,int> p1;
//     p1.first = "Saurabh Anand";
//     p1.second = 87;

//     pair<string,int> p2;
//     p2.first = "Ritik Raj";
//     p2.second = 83;

//     mp.insert(p1);
//     mp.insert(p2);

//     for(auto ele : mp){
//         cout<<ele.first<< " " <<ele.second<<endl;
//     }

//     cout<<mp.size()<<endl;

//     if(mp.find("Ritik Raj") != mp.end()){
//         cout<<"Exits"<<endl;
//     }
//     else{
//         cout<<"Not Exits"<<endl;
//     }


// return 0;
// }


///////////////////////////////////////
// Two sum 1 
// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int,int> m1;

//     for(int i=0;i<nums.size();i++){
//         int rem = target-nums[i];

//         if(m1.find(rem) != m1.end()){
//             return {m1[rem], i};
//         }

//         m1[nums[i]] = i;
//     }
//     return{};
// }