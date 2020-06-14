Q) Given a string, count the number of pairs of substrings that are anagrams of one another.

- Solved using maps </br>
- For each substring create a frequency array of length 26 (representing 26 english characters a-z). Increment the value at position corresponding to the characters in the substring. Anagramic substrings will have the same frequency array.</br>
- create a map of the type : ```<vector<int>,int>```</br>
- store the counts of each frequency vector
- Let number of anagramic substring corresponding to a particular frequency vector be 'n'. Then number of pairs = nC2 = n*(n-1)/2<br>
- Thus total sum: result = result + n*(n-1)/2 ->loop over all entries of the map.
 
