class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxcurr = -1; int temp=0;

        for(int i=arr.size()-1; i >= 0; i--) {
            temp = arr[i];
            arr[i] = maxcurr;

            if(temp > maxcurr) 
             maxcurr = temp;
        }
        return arr;
    }
};