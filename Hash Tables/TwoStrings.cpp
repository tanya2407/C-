/*
hackerrank->interview prep kit -> hashmaps (easy)
*/
/*

Given two strings, determine if they share a common substring. A substring may be as small as one character.
For example, the words "a", "and", "art" share the common substring . The words "be" and "cat" do not share a substring.

Input Format:

The first line contains a single integer p, the number of test cases.

The following p pairs of lines are as follows:

-The first line contains string s1.
-The second line contains string s2.

Output Format:
For each pair of strings, return YES or NO.


*/

#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    unordered_set<char> s;
    for(int i=0;i<s1.length();i++){
        s.insert(s1[i]);
    }
    for(int i=0;i<s2.length();i++){
        if(s.find(s2[i]) != s.end()){
            return "YES";
        }
    }
    return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
