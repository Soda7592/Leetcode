class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cost_sum=0, gas_sum=0;
        vector<int> start_index;
        int r;
        int len = gas.size();
        for(int i=0;i<gas.size();i++) {
            gas_sum += gas[i];
            cost_sum += cost[i];
            if(gas[i]-cost[i] > 0) {
                start_index.emplace_back(i);
            }
        }
        if(cost_sum > gas_sum) 
            return -1;
        if(gas.size() == 1) {
            return cost[0] <= gas[0] ? 0 : -1;
        }
        cost_sum = gas_sum = 0;
        int flag;
        for(int i=0;i<start_index.size();i++) {
            flag = gas_sum = cost_sum = 0;
            for(r=0;r<gas.size();r++) {
                gas_sum += gas[(start_index[i]+r)%len];
                cost_sum += cost[(start_index[i]+r)%len];
                if(gas_sum < cost_sum) {
                    flag = 1;
                    break;
                }
            }
            if(!flag)
                return start_index[i];
        }
        return -1;
    }
};
