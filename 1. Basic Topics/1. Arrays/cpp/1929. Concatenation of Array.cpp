class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> nums2 = nums;
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        return nums;
    }
};

class Solution2 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        for (int i = 0; i < length; i++){
            nums.push_back(nums.at(i));
        }
        return nums;
    }
};