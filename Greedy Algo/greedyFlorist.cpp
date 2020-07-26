/*
hackerrank->interview prep -> greedy algo -> med   (https://www.hackerrank.com/challenges/greedy-florist/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=greedy-algorithms)
Complete the getMinimumCost function in the editor below. It should return the minimum cost to purchase all of the flowers.

getMinimumCost has the following parameter(s):

c: an array of integers representing the original price of each flower
k: an integer, the number of friends


*/

int getMinimumCost(int k, vector<int> c) {

    sort(c.begin(),c.end(),greater<int>());
    vector<int> friends(k,0);
    int f=0, minSum=0;
    for(int i=0;i<c.size();i++){
        minSum += (friends[f] + 1) * c[i];
        friends[f]++;
        f++;
        if(f > k-1)
            f=0;
    }
    return minSum;

}
