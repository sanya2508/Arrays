# ARRAY

<hr/>

## 1D ARRAY

### <a href="https://github.com/sanya2508/Arrays/blob/master/linear%20search.cpp">Linear Search</a>

### <a href="https://github.com/sanya2508/Arrays/blob/master/binary%20search.cpp">Binary Search</a>
 * Efficient way to search in sorted array.
 * Find first and last occurence.
 * Binary search STL (binary_search(arr,arr+n,key)) in algorithm header file.
 
 


### <a href="https://github.com/sanya2508/Arrays/blob/master/Selection%20sort.cpp">Selection Sort</a>

### <a href="https://github.com/sanya2508/Arrays/blob/master/Bubble%20sort.cpp">Bubble Sort</a>
  * #### <a href="https://github.com/sanya2508/Arrays/blob/master/Bubble%20sort%20using%20comparator.cpp">Bubble Sort using comparator</a>

### <a href="https://github.com/sanya2508/Arrays/blob/master/insertion%20sort.cpp">Insertion Sort</a>

### <a href="https://github.com/sanya2508/Arrays/blob/master/inbuilt%20sort.cpp">Inbuilt sort</a>
 * sort(a,a+n) [Quite efficient]
 * Comparator:  
      * Make a compare function.
      * sort(a,a+n,compare)
      
### <a href="https://github.com/sanya2508/Arrays/blob/master/merge%20sort.cpp">Merge Sort</a>
 * Divide
 * Sort
 * Merge
 * Divide and conquer algorithm

### <a href="https://github.com/sanya2508/Arrays/blob/master/inversion%20count.cpp">Inversion Count</a>
      
### Quick sort
 * Divide and conquer algorithm.
 * Choose an eleemnt as pivot element.
 * Divide in two parts(elements which are less than or equal to pivot, elements that are greater than pivot).
 * Pivot will come in the correct position.
 * Recursively sort the two parts.

### Counting sort
 * When we have data which lies in a certain range.
 
### Bucket sort

### DNF sort

### Wave sort




### <a href="https://github.com/sanya2508/Arrays/blob/master/generate%20subarrays.cpp">Generate subarray</a>
  * Continuous element
  * This involves three nested loops.
    

### Maximum subarray sum
 * Find subarray which has the max sum.
    * <a href="https://github.com/sanya2508/Arrays/blob/master/max%20subarray%20sum1.cpp">Method 1: Generate sum for all the subarrays, keep updating the maxsum.</a> O(n^3)
    * Method 2: Using cummulative sum.
      * csum[i] = csum[i-1] + a[i] (generated in linear time)
      * for(i)
        for(j>=i)
        sum of array (i,j)= cs[j] - cs[j-i]
      * It will take O(n^2) time.
    * Method 3: Kadane's Algo! O(n)

### <a href="https://github.com/sanya2508/Arrays/blob/master/two%20pointer.cpp">Two pointer approach (Pair sum)</a>
*Given a sorted array, find pair of elements that sum to k.*


<hr/>



## 2D ARRAY

### <a href="https://github.com/sanya2508/Arrays/blob/master/spiral%20print.cpp">SPIRAL PRINT</a>

### <a href="https://github.com/sanya2508/Arrays/blob/master/waveprint_columnwise.cpp">WAVE PRINT COLUMNWISE</a>

### <a href="https://github.com/sanya2508/Arrays/blob/master/rotate%20image.cpp">ROTATE IMAGE</a>
 * Other method: 
    * Reverse all the rows. STL also have reverse method.
    * Take transpose.

### <a href="https://github.com/sanya2508/Arrays/blob/master/staircase.cpp">STAIRCASE SEARCH</a>

### Sum of all submatrix from a  given matrix
 * Approach 1:
   * 
