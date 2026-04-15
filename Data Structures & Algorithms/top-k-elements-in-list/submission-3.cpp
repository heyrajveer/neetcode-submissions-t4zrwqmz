class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        priority_queue<pair<int, int> ,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int &i:nums){
            mp[i]++;
        }
       for(auto i:mp){
          int count=i.second;
          int a=i.first;
          pq.push({count,a});
       }
       while(pq.size()!=k){
        pq.pop();
       }
       vector<int> ans;
       while(!pq.empty()){
          ans.push_back(pq.top().second);
          pq.pop();
       }
       return ans;
    }
};
