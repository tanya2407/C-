#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

long ncr(long n,long r){
    if(r>n-r)
        r = n-r;
    long res = 1;
    for(int i=0;i<r;i++){
        res *= (n-i);
        res /= (i+1);
    }
    return res;
}
// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) {
     long count = 0;
    int n = arr.size();
    if(r == 1){
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
            map[arr[i]]++;
        for(auto itr = map.begin();itr!=map.end();itr++){
            if(itr->second >= 3){
                count += ncr(itr->second,3) ;}
        }
        return count;
    }
    unordered_map<int,int> left,right;
   
    for(int i=0;i<n;i++)
        right[arr[i]]++;
    for(int i=0;i<n;i++){
        right[arr[i]]--;
        int c1=0,c2=0;
        if(arr[i]%r == 0){
            c1 = left[arr[i]/r];
            c2 = right[arr[i]*r];
            count += c1*c2;
        }
        left[arr[i]]++;
    }
    return count;
    /*long count = 0;
   long n = arr.size();
    for(long j=0;j<n-1;j++){
        long i = j-1;
        long k = j+1;
        while(i>=0 && k<arr.size()){
            while(arr[j]%arr[i]==0 &&
                arr[k]%arr[j]==0 &&
                arr[j]/arr[i]==arr[k]/arr[j]){
                count++;
                i--;
                k++;
            }

            if(arr[j]%arr[i]==0 && arr[k]%arr[j]==0){
                if(arr[j]/arr[i] < arr[k]/arr[j])
                    i--;
                else
                    k++;
            } 

            else if(arr[j]%arr[i] == 0)
                k++;
            else
                i--;
        }
    }

return count;*/
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nr_temp;
    getline(cin, nr_temp);

    vector<string> nr = split(rtrim(nr_temp));

    int n = stoi(nr[0]);

    long r = stol(nr[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long> arr(n);

    for (int i = 0; i < n; i++) {
        long arr_item = stol(arr_temp[i]);

        arr[i] = arr_item;
    }

    long ans = countTriplets(arr, r);

    fout << ans << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
