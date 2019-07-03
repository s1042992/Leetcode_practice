class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    vector< vector<int> >::iterator row;
    for (row = matrix.begin(); row != matrix.end(); row++) {
        if(find(row->begin(), row->end(), target) != row->end() )
            return true;
    }
    return false;

    }
};