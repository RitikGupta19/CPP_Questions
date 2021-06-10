
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        int i, lead = arr[n - 1];
        vector<int> res;
        res.push_back(lead);
        for(i = n-2; i >= 0; i--){
            if(arr[i] >= lead){
                lead = arr[i];
                res.push_back(lead);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
