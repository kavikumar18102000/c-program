What is sorting?
Even though you are familiar with sorting, allow me to reiterate the basics.
So, sorting is a method to arrange a set of elements in either increasing or decreasing order according to some
basis/relationship among the elements. Sorting are of two types, as you could deduce from the definition:

                    Sorting in ascending order (increasing order of numbers), and
                    Sorting in descending order (decreasing order of numbers).


Criteria for analysis for sorting Algorithms:

        ->Time Complexity
        ->Space Complexity
        ->Stability
        ->Internal & External Sorting Algorithms
        ->Adaptivity
        ->Recursiveness


Time Complexity:
We observe the time complexity of an algorithm to see which algorithm works efficiently
for larger data sets and which algorithm works faster with smaller data sets. What if one 
sorting algorithm sorts only 4 elements efficiently and fails to sort 1000 elements. 
What if it takes too much time to sort a large data set? These are the cases where 
we say the time complexity of an algorithm is very poor.
In general, O(N log N) is considered a better algorithm time complexity than O(N 2), 
and most of our algorithms’ time complexity revolves around these two. 

Note: Lesser the time complexity, the better is the algorithm.


Space Complexity:
The space complexity criterion helps us compare the space the algorithm uses to sort any data set. 
If an algorithm consumes a lot of space for larger inputs, it is considered a poor algorithm for sorting large data sets. 
In some cases, we might prefer a higher space complexity algorithm if it proposes exceptionally low time complexity,
but not in general.
And when we talk about space complexity, the term in-place sorting algorithm arises. 
The algorithm which results in constant space complexity is called an in-place sorting algorithm. 
Inplace sorting algorithms mostly use swapping and rearranging techniques to sort a data set. One example is Bubble Sort.


Stability:
The stability of an algorithm is judged by the fact whether the order of the elements having equal status when
sorted on some basis is preserved or not. It probably sounded technical, but let me explain. 
Suppose you have a set of numbers, 6, 1, 2, 7, 6, and we want to sort them in increasing order by using an algorithm.
Then the result would be 1, 2, 6, 6, 7. But the key thing to look at is whether the 6s follow the same order as that
given in the input or they have changed. That is, whether the first 6 still comes before the second 6 or not. If they do,
then the algorithm we followed is called stable, otherwise unstable.


Internal Sorting Algorithms -> All the data is loaded into the memory(RAM)
External Sorting Algorithms -> All the  data is not loaded into the memory(RAM).(Reads the data from disc,hard drive etc..)


Adaptivity -> All ready sorted algorithm takes less time.
             (If an already sorted algorithm is passed to sort, there will be an advantage given.
              It may take less time to sort the algorithm.)


Recursive/Non-Recursive sorting algorithm -> Recursive if it uses recursion.