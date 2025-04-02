#include<bits/stdc++.h>
using namespace std;
    
bool containsDuplicate(vector<int> nums) {
 
    sort(nums.begin(),nums.end());
    
    for(int index = 1; index < nums.size(); index++) {
        if(nums[index ] == nums[index - 1]) {
            return true;
        }
    }

    return false;
}
    
int main () {
	    
    vector<int> nums {1, 2, 3, 4};
    
    bool res = containsDuplicate(nums);
    
    // printing the result
    if(res== 1)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}