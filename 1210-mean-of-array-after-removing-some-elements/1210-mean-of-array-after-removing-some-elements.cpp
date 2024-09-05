class Solution {
public:
    double trimMean(vector<int>& arr) {
       sort(arr.begin(),arr.end());
        int n=arr.size();
        int a=(n*5)/100;
        int sum=0;
        for(int i=a;i<n-a;i++){
            sum+=arr[i];
        }
        return double(sum)/(n-2*a);

    }
};