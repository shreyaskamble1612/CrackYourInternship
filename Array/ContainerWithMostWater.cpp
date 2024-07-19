#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;int r = height.size() -1;
        int maxi = 0;

        while(l<r){
            int currArea = min(height[l],height[r]) * (r-l);
            maxi = max(maxi,currArea);

            if(height[l] < height[r]){
                l++;
            } else{
                r--;
            }
        }
        return maxi;
    }
};

int main(){
    return 0;
}