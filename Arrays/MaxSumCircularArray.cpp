
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int maxOfNormalArray(int arr[], int n){
        int res = arr[0], curr = arr[0];
        for(int i = 1; i < n; i++){
            curr = max(curr + arr[i], arr[i]);
            res = max(res, curr);
        }
        return res;
    }
    
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int maxNormal = maxOfNormalArray(arr, n);
        if( maxNormal < 0){
            return maxNormal;
        }
        int arrSum = 0, res = 0;
        for(int i = 0; i < n; i++){
            arrSum += arr[i];
            arr[i] = -arr[i]; 
        }
        res = arrSum + maxOfNormalArray(arr, n);
        return max(res, maxNormal);
    }
};
