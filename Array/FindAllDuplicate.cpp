#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> NEW;

        unordered_map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }

        for(auto itt:mp){
            if(itt.second == 2){
                NEW.push_back(itt.first);
            }
        }
        return NEW;
       
    }
};

int main(){
    return 0;
}