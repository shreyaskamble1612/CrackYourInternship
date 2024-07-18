#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s = nums.size();

        int red = 0;
        int white = 0;
        int blue = 0;

        for(int i = 0;i<s;i++){
            if(nums[i] == 0){
                red++;
            }else if(nums[i] == 1){
                white++;
            }else if(nums[i] == 2){
                blue++;
            }
        }

        int k = 0;
        while(red > 0){
            nums[k] = 0;
            k++;
            red--;
        }
        while(white > 0){
            nums[k] = 1;
            k++;
            white--;
        }
        while(blue > 0){
            nums[k] = 2;
            k++;
            blue--;
        }
    }
};

int main(){
    return 0;
}