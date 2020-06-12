# Some notes on programming questions solved using C++

## Srings
1. Intialize: ```string s = "" ```
2. String length: ```s.length();```

## Hashmap in C++
#### unordered_map:
1. Stores elements as a combination of key value pair. 
2. Library: ``` #include<unordered_map>``` OR ```#include<bits/stdc++.h>``` 
3. Initialization example: ```unordered_map<string,int> map```
4. Internally implemented using Hash table. Therefore avgcost of search,insert,delete is O(1).
5. Inserting Values: ```map["Tanya"] = 1;``` 
6. Traversing: ```
                  for(auto i: map)
                  {
                      cout<<i.first()<<i.second(); 
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
                  

Note created from the following links:
[GeeksforGeeks C++ STL](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/#:~:text=unordered_map%20in%20C%2B%2B%20STL,type%20predefined%20or%20user%2Ddefined.)
