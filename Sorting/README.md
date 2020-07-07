## Bubble Sort
With each subsequent iteration "k", kth largest element is being placed at its position. 
1. Naive approach -> 2 for loops -> takes O(n^2) everytime
2. Stop when the array is sorted -> make use of flags to check if there were any swaps during an iteration.
  - Worst Case: When the array is reverse sorted : O(n*n)
  - Average Case: O(n*n)
  - Best Case: O(n)
  -Auxillary space: O(1) ->inplace sorting
  
3. Recursive Bubble sort {[Recursive Bubble sort](https://www.geeksforgeeks.org/recursive-bubble-sort/)}
  - Base case => Only one element present in the array 
  - No advantage over the iterative approaches.
  ```
  void BubbleSortRecursive(vector<int> a,int n){
    if(n==1)
      return;
    for(int i=0;i<n-1;i++){
      if(a[i] > a[i+1])
        swap(a[i],a[i+1]);
    }
    return BubbleSortRecursive(a,n-1);
  }
  ```

## Quick sort
- Divide and conquer method
- Inplace, cache friendly sorting algorithm as it has good locality of reference when used for arrays.
1. Time taken by quicksort can be given by  T(n) = T(k) + T(n-k-1) + O(n) , where k is the number of elements smaller than the pivot
2. Worst case : When partition picks smallest or the largest number as pivot ->  T(n) = T(0) + T(n-1) + O(n)  -> O(N*N)
3. Best case: When partition always picks the middle element as pivot -> T(n) = 2T(n/2) + O(n) -> O(NlogN)
4. Average case : O(NlogN)
For more reference [Click here](https://www.geeksforgeeks.org/quick-sort/)
