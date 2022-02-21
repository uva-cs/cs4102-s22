---
layout: default
title: CS4102 Algorithms - Spring 2022 
---
# Topics for Unit A Exam: CS4102 Algorithms - Spring 2022

Document Version: 1.1, 2/21/2022

Update: Original text used CLRS term "substitution" for what we called the guess-and-check method. We clarified that these are the same thing.


Overview
---------------------------------------

The Unit A Exam is on lectures and readings from the start of class through Feb. 15.  The following topic list is a guide, and we may update it before the exam in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the exam.

Basic homeworks 2 and 3 for this unit are designed to help prepare you for the exam.



How the Exams Will Be Given and Other Rules
----------------------------------------------
The Exam will first be given on paper and in-class on 2/22/2022.  You will have a chance to re-take the Exam (a updated version) the Tuesday after spring break if you are not satisfied with your grade.

The Exam will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking an exam. 
It is an honor violation to communicate information about the exam to anyone who might not have yet taken it. You will sign a pledge about these rules.



Topics that might be covered on the Unit A Exam include:
-------------------------------------------------

- Basic Terms and concepts: algorithm, basic operation, brute-force, Worst-case, average-case, best-case
- Asymptotic growth rate; order classes; BigTheta and all the others
    - Definitions and their conceptual meaning
- Lower bounds, optimal algorithms

- Insertion sort: worst-case complexity; what are its advantages
    - The lower bound argument about sorts that only swap adjacent keys
- The divide and conquer design strategy (D&C)
    -Writing simple recursive divide and conquer algorithms
- Mergesort: its D&C strategy and recurrences
    - Need to know merge is linear, but not any details on its implementation

- Quicksort:
    - What's the overall D&C strategy?
    - Partition: understand what the goal of any Partition algorithm
    - If we ask about implementation details, it will only be about the version in the slides (not the implementations in CLRS). So know how the one in the slides works, its worst-case, its time-coplexity etc.
    - For Quicksort, what's the recurrence of the worst-case? the best-case?
    - What leads to the worst-case? How can we prevent this? (randomized choice of pivot value, estimates of median, etc.)
    - Average and expected behavior for QS:  Know the bottom line. 

- Stablity and space complexities of sorts: insertion sort, quicksort, mergesort

- Decision trees and lower-bound arguments for comparison sorting.

- Coming up with a D&C solution for a new problem described in words (like those on the basic homework)

- Writing recurrence relations for D&C algorithms

- Reducing recurrences to closed form using the "unrolling" method, guess-and-check -- what CLRS calls "substitution" -- (including simple induction proofs). You won't be asked to draw a tree for the tree method, but you might be asked about this method

- Using the Master theorem, including when Case 1 or 3 cannot be used.

    
- Closest-pair of points problem, including strategy, time-complexity, topics related to "the runway"

- Strassens' matrix multiplication and Karatsuba's algorithm. Just know the general ideas that make these interesting, including the recurrences. (No details on implementation.)

- Know how Quickselect can find order statistics, and its basic time-complexity
- Understand the need for a good pivot, and that median of medians finds a good enough pivot to make Quickselect linear.
    - Understand the strategy of  median of medians
    - You do not need how to derive the recurrence for its use with Quickselect or how to use induction to reduce it.


Topics that will *not* be covered on the Exam include:
-------------------------------------------------

- Proving correctness using loop invariants
- The details of how merge (for mergesort) is implementated
- Nasty or time-consuming induction proofs
- The math that gets us the average case for Quicksort
- The details of the matrix algebra that make Strassen's algorithm calculate the right product, or the details of the algebra used to get a better formula for Karatuba
- How to derive the recurrence for using median of medias with Quickselect 
- Trominoes
- Sorting methods like counting sort, radix sort
- Maximum Sum Continuous Subvector Problem
- Anything about LaTeX

