/*
	Counting pairs of substrings that are anagrams of one another.
	hackerrank -> interview prep kit -> hash tables (medium difficulty)
*/
/*

Two strings are anagrams of each other if the letters of one string can be rearranged to form the other string.
Given a string, find the number of pairs of substrings of the string that are anagrams of each other.

For example s=mom , the list of all anagrammatic pairs is [[m,m],[mo,om].

The first line contains an integer q, the number of queries.
Each of the next q lines contains a string s to analyze.

1 <= q <= 10
1 <= |s| <= 100

For each query, return the number of unordered anagrammatic pairs.

*/
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int to_num(char a){
    return (a-'a');
}
// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
    int n = s.length();
    map<vector<int>, int> m;
        //map<vector<int>, int> mp; 

    //starting index of the substring
    for(int i=0;i<n;i++){
        vector<int> freq(26,0);  // total 26 chars
        
        //length of the substring
        for(int j=i;j<n;j++){
            freq[to_num(s[j])]++;
            m[freq]++;
        }
    }
    int result = 0;
    for(auto it = m.begin();it!=m.end();it++){
        int num = it->second;
        result += (num*(num-1))/2;
    }
return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
