/*
hackerrank -> interviewprep -> string manipulation-> medium
A string is said to be a special string if either of two conditions is met:

All of the characters are the same, e.g. aaa.
All characters except the middle one are the same, e.g. aadaa.
Print a single line containing the count of total special substrings.



*/

long substrCount(int n, string s) {
      int ans = 0;
      int i=0,j,c;
      vector<int> char_count(n,0);

      while(i<n){
          j=i+1;
          c=1;
          while(j<n && (s[j] == s[i])){
              
                  ++c;
                  ++j;
              }
              char_count[i] = c;
              ans += (c*(c+1))/2;
              i=j; 
          }
      

      for(j=1;j<n-1;j++){
          if(s[j] == s[j-1])
            char_count[j] = char_count[j-1];

          if(s[j-1] == s[j+1] && s[j]!=s[j-1]){
              ans += min(char_count[j-1],char_count[j+1]);
          }
      }
      for(i=0;i<n;i++)
        cout<<char_count[i]<<endl;
    return ans;
}
