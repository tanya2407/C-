/*
hackerrank->interviewkit->stringmanipulation(easy)
Q -> return an integer representing the minimum total characters that must be deleted to make the strings anagrams.


*/

int makeAnagram(string a, string b) {
    int count=0;
    int l1 = a.length();
    int l2 = b.length(); 
    //cout<<l1<<" "<<l2<<endl;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<l1 && j<l2){
        if(a[i]<b[j]){
            count++;
            i++;
        }
        if(a[i]>b[j]){
            count++;
            j++;
        }
        if(a[i] == b[j]){
            i++;
            j++;
        }
    }

    return count + l1 - i + l2 - j;

}
