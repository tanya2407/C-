/*
hackerrank -> interview prep -> greedy algo -> easy

Complete the luckBalance function in the editor below. It should return an integer that represents the maximum luck balance achievable.

luckBalance has the following parameter(s):

k: the number of important contests Lena can lose
contests: a 2D array of integers where each contest[i] contains two integers that represent the luck balance and importance of the ith contest.
-If Lena wins the contest, her luck balance will decrease by contest[i][0]; if she loses it, her luck balance will increase by contest[i][0].
- contest[i][1] denotes the contest's importance rating. It's equal to 1 if the contest is important, and it's equal to 0 if it's unimportant.
If Lena loses no more than k important contests, what is the maximum amount of luck she can have after competing in all the preliminary contests? This value may be negative.
-> https://www.hackerrank.com/challenges/luck-balance/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=greedy-algorithms

*/

bool sortContest(vector<int> a, vector<int> b){
    return a[0] > b[0];
}
// Complete the luckBalance function below.
int luckBalance(int k, vector<vector<int>> contests) {
    sort(contests.begin(),contests.end(),sortContest);
    int luckSum = 0;
    for(int i=0;i<contests.size();i++){
        if(contests[i][1] == 0){
            luckSum += contests[i][0];
        }
        else{
            if(k>0){
                luckSum += contests[i][0];
                k--;
            }
            else{
                luckSum -= contests[i][0];
            }
        }
    }
    return luckSum;
}
