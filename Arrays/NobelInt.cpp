/*
interview bit -> array (easy) : https://www.interviewbit.com/problems/noble-integer/
*/

int Solution::solve(vector<int> &A) {
    int count =0;
    sort(A.begin(),A.end());
    if(A[A.size()-1] == 0)
        return 1;
    int i=0;
    while(i<A.size()){
        int num = A[i];
        while(A[i] == num){
            i++;
        }
        if(A.size()-i == num)
            return 1;
    }
    return -1;
}Creay
