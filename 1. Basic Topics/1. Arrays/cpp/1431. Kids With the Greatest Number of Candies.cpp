class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int length = candies.size();
        vector<bool> returnVector;
        int max_score = *max_element(candies.begin(), candies.end());
        for(int i = 0; i<length; i++){
            if(candies[i]+extraCandies>=max_score){
                returnVector.push_back(true);
            }else{
                returnVector.push_back(false);
            }
        }
        return returnVector;
    }
};