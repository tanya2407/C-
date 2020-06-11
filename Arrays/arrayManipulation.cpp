/*
HackerRank practice qustions -> interview kit-> arrays-> hard
O(n) solution
*/
/*

Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each of the array
element between two given indices, inclusive. Once all operations have been performed, return the maximum value in your array.

For example, the length of your array of zeros n= 10. Your list of queries is as follows:

a	b	k
1	5	3
4	8	7
6	9	1

Add the values of k between the indices a and b inclusive.
Return the integer maximum value in the finished array.

*/

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


long arrayManipulation(int n, vector<vector<int>> queries) {
//O(n)
vector<long> arr (n,0);
for(int i=0;i<queries.size();i++){
    arr[queries[i][0]-1] +=   queries[i][2];   //
    arr[queries[i][1]] += -1 * queries[i][2]; 
    //cout<<queries[i][0]-1<<" "<<queries[i][1]<<" "<<queries[i][2]<<" "<<i<<endl;
}

long max = arr[0];
long pref_sum=arr[0];
for(int i=1;i<n;i++){
  pref_sum = pref_sum + arr[i];
  max = (max < pref_sum)? pref_sum : max;
}
return max;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
