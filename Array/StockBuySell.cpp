#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];

        int maxi = 0;

        
            for(int i = 1;i<prices.size();i++){
              maxi = max(prices[i]-min_price,maxi);
              min_price = min(prices[i],min_price);
            }
        

        return maxi;
    }
};
int main(){
    return 0;
}