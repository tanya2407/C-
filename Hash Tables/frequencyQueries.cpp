#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the freqQuery function below.
vector<int> freqQuery(vector<vector<int>> queries) {
    vector<int> ans;
    unordered_map<int,int> m1,m2;
    for(long i=0; i < queries.size(); i++){
        if(queries[i][0] == 1){
            int num = m1[queries[i][1]];
            m1[queries[i][1]]++;
            if(m2[num]>0)
                m2[num]--;
            m2[num+1]++;
        }
        else if(queries[i][0] == 2){
            int num = m1[queries[i][1]];
            if(num>0)
                m1[queries[i][1]]--;
            if(m2[num]>0)
                m2[num]--;
            m2[num-1]++;
        }
        else if(queries[i][0] == 3){
            int num = queries[i][1];
            if(m2[num]>0)
                ans.push_back(1);
            else
                ans.push_back(0);

        }
    }

    return ans;

}

