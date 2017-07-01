In the name of God

- Simple problems
    - A + B
    - Print 1 to N
    - Is even?
    - Count of divisors
    - Sum of divisors
    - 1 to N that sum of divisors (except itself) equals itself
- Vector
- Array
    - Reverse a list


- Set
- Map


- Primitive algorithms etc.
    - Area of a triangle by the points
    - Is prime $O(\sqrt{n})$
    - Prime factorization
    - Digits count
        - Reverse number
    - Prime sieve
        - Divisors count
           1. No check for prime (bad)
           2. Factorize, $(a + 1) * (b + 1) ...$
        - Sum of divisors (no check for prime)
        - ...
    - GCD
    - Base change
    - Power 
    - with logarithmic order
        1. $a^{10110} = a^{16} * a^4 * a^2$
        2. $a^b = (a^{b/2})^2 [*a]?$
    - Binary search
    - Big integer


- Other algorithms
    - Bubble sort
    - Insertion sort
    - Shell sort
    - Merge
    - Merge sort
    - Quick sort


- String
    - Get a string and n characters, index of/occurences count
    - Get a string and n strings, index of/occurences count
    - **746B** Remove middle character of a string repeatedly, put them in a line (zopda -> podza)
    - Reverse the previous action
    - Base change, base > 10
    - **745A** Using rotates, how many different strings can we generate?
    - **672B** Min count of letters changed so that letters are distinct?


- Recursion
    - Factorial
    - Fibonacci
    - GCD
    - Combination
    - Print the elements of a vector getting the size
    - Towers of Hanoi
    - Reverse a string
    - Binary representation
    - Merge two sorted strings
    - Merge sort
    - DFS
        - Grid of 01, path from top-left to bottom-right exists?
        - **~510B** Grid of 0-9, has a cycle of one color?
        - Graph DFS
          - Number of components
          - Has a cycle?
          - Print parts of a bipartite graph
        - **377A** Input a 01 grid (a maze). It is known that 1's are all connected. Change k other 0's to 1's so that the 1's all remain connected. Print "X"s in a "." and "#" grid.
        - **580C** Input n and m, an n-vertex tree (edges), and a sequence of n 0 or 1's. The tree is rooted at vertex 1. Find number of leaves of the tree that has a path to root with at most m consecutive 1's.
        - **115A** Input a rooted tree (parents). We want to divide its vertices into groups such that no two elements of a group are ancestors of each other. Minimum number of groups?
    - Back-track


- Dynamic Programming
