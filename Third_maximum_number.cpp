class Solution {
public:
    int thirdMax(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int maxx = INT_MIN;
        if(mp.size()==1){
            return nums[0];
        }
        else if(mp.size()==2){
            for(auto i: mp){
                maxx = max(i.first,maxx);
            }
            return maxx;
        }
        else{
            for(auto i:mp){
                maxx = max(i.first,maxx);
            }
            mp.erase(maxx);
            maxx = INT_MIN;
            for(auto i:mp){
                maxx = max(i.first,maxx);
            }
            mp.erase(maxx);
            maxx = INT_MIN;
            for(auto i:mp){
                maxx = max(i.first,maxx);
            }
        }
        return maxx;
    }
};
