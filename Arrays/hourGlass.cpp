#include <bits/stdc++.h>

using namespace std;

int hr(vector<vector<int>> arr,int r, int c){
    int sum = 0;
    for(int i=c;i<c+3;i++){
        sum = sum + arr[r][i] + arr[r+2][i];
    }
    return  sum + arr[r+1][c+1];
    
}
// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {

    int r = arr.size(), c = arr[0].size();
    int max = INT_MIN;
    for(int i=0;i<r-2;i++){
        for(int j=0;j<c-2;j++){
            int c = hr(arr,i,j);
            max = max<c? c : max;

        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
