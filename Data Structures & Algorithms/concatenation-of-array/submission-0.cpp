class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int orgArrSize = nums.size();
        vector<int> newArr(2 * orgArrSize);
        for(int i = 0; i < orgArrSize; i++) {
            newArr[i] = nums[i];
        }
        for(int i = orgArrSize; i < 2 * orgArrSize; i++ ) {
            newArr[i] = nums[i - orgArrSize];
        }
        return newArr;
    }
};