/*
hackerrank->interview prep -> greedy algo -> easy

Complete the minimumAbsoluteDifference function in the editor below. It should return an integer that represents the minimum absolute difference between any pair of elements.

minimumAbsoluteDifference has the following parameter(s):

n: an integer that represents the length of arr
arr: an array of integers
*/

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int mindiff = INT_MAX;
    for(int i=1;i<arr.size();i++){
        if(abs(arr[i-1]-arr[i]) < mindiff)
            mindiff = abs(arr[i-1]-arr[i]);
    }
    return mindiff;

}
