/*

hackerrank->interview prep-> string manipulation->very easy

You are given a string containing characters 'A' and 'B' only.
Your task is to change it into a string such that there are no matching adjacent characters.
To do this, you are allowed to delete zero or more characters in the string.
Your task is to find the minimum number of required deletions.
*/

int alternatingCharacters(string s) {
    int n = s.length();
    if(n==1)
        return 0;
    int i=0,j=1;
    int count = 0;
    while(j<n){
        if(s[j] == s[i]){
            count++;
            j++;
        }
        else{
            i=j;
            j++;
        }
    }
    return count;

}
