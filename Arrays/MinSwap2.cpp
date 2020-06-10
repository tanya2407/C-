/*
You are given an unordered array consisting of consecutive integers [1, 2, 3, ..., n] without any duplicates. You are
allowed to swap any two elements. You need to find the minimum number of swaps required to sort the array in
ascending order.
For example, given the array [4,3,1,2] we perform the 3 steps to obtain sorted array.

Write a code which returns an integer representing the minimum number of
swaps to sort the array.

*/
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void p(vector<int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) {

int n= arr.size();
int i=0;
int count = 0;
while(i<n-1){
    if(arr[i] == (i+1)){

        i++;
    } 
    else{
       int temp = arr[i];
        arr[i] = arr[temp-1];
        arr[temp-1] = temp;
        count++;
        //p(arr); 
    }
}
return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = minimumSwaps(arr);

    fout << res << "\n";

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
