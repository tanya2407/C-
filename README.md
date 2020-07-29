# Some notes on programming questions solved using C++

## Srings
1. Intialize: ```string s = "" ```
2. String length: ```s.length();```
3. Breaking input into word using string stream: 
```
stringstream ss(s);  // Used for breaking words 
string word;         // To store individual words 
while (ss >> word) 
  wordFreq[word]++;

```
4. String concatenate: ``` A + B```

## Vectors in C++
1. Initialize: ```vector<int> arr; ``` OR ```vector<int> arr(n) ``` Initializes array with n elements having values 0 OR ```vector<int> arr(n,k)``` Initializes an array with n elements having values k.

2. Initializing a 2D matrix of size mxn :     vector<vector<int>> matrix(m,vector<int> (n,0));

3. sorting a vector: ```sort(arr.begin(),arr.end());```

## Hashmap in C++
#### unordered_map:
1. Stores elements as a combination of key value pair. 
2. Library: ``` #include<unordered_map>``` OR ```#include<bits/stdc++.h>``` 
3. Initialization example: ```unordered_map<string,int> map```
4. Internally implemented using Hash table. Therefore avgcost of search,insert,delete is O(1).
5. Inserting Values: ```map["Tanya"] = 1;``` OR ``` map.insert(make_pair("Tanya", 1)); 

6. Traversing: 
```
for(auto i: map)
{
  cout<<i.first()<<i.second(); 
} 
```

7. Traversing using a iterator:
```
unordered_map<string, int>:: iterator itr; 
    for (itr = map.begin(); itr != map.end(); itr++) 
    { 
        // itr works as a pointer to pair<string, double> 
        // type itr->first stores the key part  and 
        // itr->second stroes the value part 
        cout << itr->first << "  " << itr->second << endl; 
     } 

```
8. Finding a key using an iterator:
```
if (map.find(key) == map.end()){
  Key not found
}
else{
  Key Found
}

``` 
                
#### unordered_set:
1. Stores only keys.
2. Mainly used is keep track of absence/presence elements.
                  
#### set:
1. ordered sequence of unique keys

#### map:
1. Ordered sequence of unique keys and corresponding values
2. It is implemented as balanced tree structure that is why it is possible to maintain an order between the elements (by specific tree traversal).
3. Time complexity of map operations is O(Log n) while for unordered_map, it is O(1) on average.
                  

Notes created from the following links:
[GeeksforGeeks unordered_map in C++ STL](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/#:~:text=unordered_map%20in%20C%2B%2B%20STL,type%20predefined%20or%20user%2Ddefined.)
