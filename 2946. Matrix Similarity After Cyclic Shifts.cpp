class Solution {
public:
    void rotateArray(vector<int> &arr, int k){
        k = k%arr.size();
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin()+k, arr.end());
        reverse(arr.begin(), arr.end());
    }
    bool check(vector<vector<int>>& mat, vector<vector<int>>& new_mat)
    {
        for(int i = 0; i<mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
                if(mat[i][j] != new_mat[i][j])
                    return false;
        }
        return true;
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
//         rotate each row by k times by reverese method 
//      check for reverse and orignal equality
        vector<vector<int>> new_mat(mat);
        for(int i = 0; i < new_mat.size(); i++)
            rotateArray(new_mat[i], k);
        
        // for(auto x : new_mat)
        // {
        //     for(auto y : x)
        //         cout<<y<<" ";
        //     cout<<"\n";
        // }
        
        return check(mat, new_mat);
    }
};