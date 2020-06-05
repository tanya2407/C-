/*
Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography. During his last hike
he took exactly n steps. For every step he took, he noted if it was an uphill,'U', or a downhill, 'D' step. Gary's hikes start and end
at sea level and each step up or down represents a 1 unit change in altitude. We define the following terms:

A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down
to sea level.

A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up
to sea level.

Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through.

For example, if Gary's path is [DDUUUUDD], he first enters a valley 2 units deep. Then he climbs out an up onto a mountain 2 units high.
Finally, he returns to sea level and ends his hike.

->Input Format

The first line contains an integer N, the number of steps in Gary's hike.
The second line contains a single string S, of N characters that describe his path.

*/

#include <bits/stdc++.h>

using namespace std;


int countingValleys(int n, string s) {

	int count = 0;
	int sum = 0;

	for(int i=0;i<n;i++){
		int prev = sum;
		if(s[i] == 'D'){
			sum--;}
		else if(s[i] == 'U'){
			sum++;}
		if(prev==0 && sum<0){
			count++;
        
		}
	}
	return count;
}

int main()
{

    int n;
    cin >> n;

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";

    

    return 0;
}
