class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
       stack<long long> st;
       vector<long long> vec;
       st.push(arr[n - 1]);
       vec.push_back(-1);
       for(int i = n - 2; i >= 0 ; i--){
           while((st.empty() == false) && st.top() <= arr[i]){
               st.pop();
           }
          long long temp = st.empty() ? -1 : st.top();
          vec.push_back(temp);
          st.push(arr[i]);
       }
       reverse(vec.begin(), vec.end());
       return vec;
    }
};
