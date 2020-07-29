/*
interviewbit-> array , string and sorting
easy
https://www.interviewbit.com/problems/largest-number/
*/
bool sortfunc(string A, string B){
    /*
    if(stoll(A+B) >= stoll(B+A))
        return true;
    else
        return false;
     */
     
      return A+B > B+A;
}
string Solution::largestNumber(const vector<int> &A) {
    string a = "";
    vector<string> str;
    for(int i=0;i<A.size();i++){
        str.push_back(to_string(A[i]));
    }
    sort(str.begin(),str.end(), sortfunc);
    
    for(int i=0;i<str.size();i++){
        a.append(str[i]);
    }
    if(a[0] == '0')
        return "0";
    return a;
    
}
