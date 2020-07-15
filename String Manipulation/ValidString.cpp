/*
hackeerrank->interview prep->string manipulation->medieum*

Sherlock considers a string to be valid if all characters of the string appear the same number of times.
It is also valid if he can remove just 1 character at 1 index in the string, and the remaining characters will occur the same number of times.
Given a string , determine if it is valid. If so, return YES, otherwise return NO.
*/

string isValid(string s) {
    vector<int> chars(26);
    string ans = "NO";
    for(int i=0;i<s.length();i++){
        chars[s[i]-'a']++;
        
    }
    for(int i=-1;i<26;i++) // to remove i+'a' element
    {
        if(i >= 0 && chars[i] == 0)
            continue;
        if(i >= 0)
            chars[i]--;
        unordered_set<int> set;
        for(int j=0;j<26;j++){
            if(chars[j]>0)
                set.insert(chars[j]);
        }
        if(set.size() == 1)
            return "YES";

        if(i >= 0)
            chars[i]++;
    }
    return "NO";

}
