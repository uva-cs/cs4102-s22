---
layout: default
title: CS4102 Algorithms - Spring 2022 
---
# Topics for Unit C Exam: CS4102 Algorithms - Spring 2022

Document Version: 1.0, 4/14/2022 


Overview
---------------------------------------

The Unit C Exam is on lectures and readings from March 17 through April 12 (maybe a bit at the start of April 14).  The following topic list is a guide, and we may update it before the exam in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the exam.

Basic homeworks 1 and 2 for this unit are designed to help prepare you for the exam.


How the Exams Will Be Given and Other Rules
----------------------------------------------
The Exam will first be given on paper and in-class on April 19, 2022.  You will have a chance to re-take the Exam (a updated version) during the final exam period if you are not satisfied with your grade.

The Exam will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking an exam. 
It is an honor violation to communicate information about the exam to anyone who might not have yet taken it. You will sign a pledge about these rules.


Topics that might be covered on the Unit C Exam include:
-------------------------------------------------

- For any algorithm studied in this unit, know...
    - Optimal substructure property for the problem the algorithm solves
    - Time and space complexity for the algorithm
    - For dynamic programming algorithms, know how to build the "table" bottom-up, and also how recover the values that produced the optimal value for a given input
    

- Dynamic Programming (general topics)
    - Good for overlapping subproblems. Good when we can't guarantee we find best solution by solving just one subproblem.
    - Finds solutions to smallest subproblems first
    - Two implementation approaches:  top-down with memoization, and bottom-up
    - For each algorithm we studied, know...
        - The recursive structure of the solution in terms of its subproblems
        - How to build the table from small solutions to the overall solution
        - How to recover the values that led to the optimal solution from the table 

- Log Cutting Problem
    - Bottom-up dynamic programm (DP) solution
    
- Matrix Chain Multiplication Problem
	- What value are we optimizing, and why the order you multiply pairs matters
    - Bottom-up dynamic programm (DP) solution, storing values for a range of given size long diagonals in the table
    
- LCS Problem
    - Prefix-strings as subproblems
    - Definition of the LCS problem 
    - The cases of recursive structure
    - This is one example where the slides show you a top-down version that uses memoization

- Seam Carving
	- How minimum seam values are stored in the m x n table, and recursive definition used to build this from bottom up
	- How to find minimum cost seam
	- No questions on details of updating the table when removing a seam!

- Gerrymandering
	- Be able to answer general questions about how the problem is defined
	- Be able to explain the components of the recursive definition
	- Know the time-complexity and why it's pseudo-polynomial
	- You do NOT need to know how optimal substructure applies to gerrymandering!


- Pseudo-polynomial time: what does this mean?
	
- Greedy Algorithms (general topics)
    - Terminology: optimization problems, feasible solutions, objective function, optimal solutions, etc.
    - Greedy choice property (greedy choice): what this means, and what it is for each algorithm we studied
    - Compare and contrast DP and Greedy: what's similar/shared, how different
    - Why Dijkstra's and Prim's are greedy algorithms
    - Proving a greedy algorithm correct using an exchange argument

- Coin changing
    - The greedy algorithm
    - Understand overall structure of its proof of correctness for a given coin-set. (For  a given range, what do we try to show?)
    - What might make the greedy fail?  Know that a DP solution with a table can be used, though you don't need to know the details of how to implement this.

- Interval Scheduling  Problems (AKA Activity Selection)
    - Greedy approach for this, and proof of correctness using exchange argument
    - Know how optimal substructure applies to this
    
- Huffman coding
	- Know the problem, prefix-free codes, the optimization function
	- How the greedy choice produces a smaller subproblem and lets us create a larger tree, step by step
	- You won't be asked to re-create the exchange argument proof for this, but might be asked some specific questions about how we did it and why
	
- Cache Replacement
	- Know the problem, the inputs and their meanings, what we're trying to minimize, our greedy choice, etc.
	- We'll be kind and not ask you questions about this one's proof! :-)


Topics that will *not* be covered on the exam include:
-------------------------------------------------

- No questions on details of updating the table when removing a seam!
- You do NOT need to know how optimal substructure applies to gerrymandering!
- No questions on the proof related to Belady cache replacement
- No questions on Seinfeld episodes or on the relative cuteness of baby ducks


