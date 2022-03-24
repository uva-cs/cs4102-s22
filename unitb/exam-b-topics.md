---
layout: default
title: CS4102 Algorithms - Spring 2022 
---
# Topics for Unit B Exam: CS4102 Algorithms - Spring 2022

Document Version: 1.1, 3/24/2022


Overview
---------------------------------------

The Unit B Exam is on lectures and readings from Feb. 17 through the recorded lecture for March 15.  The following topic list is a guide, and we may update it before the exam in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the exam.

Basic homeworks 1 and 2 for this unit are designed to help prepare you for the exam.



How the Exams Will Be Given and Other Rules
----------------------------------------------
The Exam will first be given on paper and in-class on 3/29/2022.  You will have a chance to re-take the Exam (a updated version) during the final exam period if you are not satisfied with your grade.

The Exam will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking an exam. 
It is an honor violation to communicate information about the exam to anyone who might not have yet taken it. You will sign a pledge about these rules.



Topics that might be covered on the Unit B Exam include:
-------------------------------------------------

- Graphs
    - No specific questions on the review from earlier courses that we did (e.g. adjacency list vs. matrix, etc.) but understanding these topics may be needed in other questions
    
- BFS
    - The strategy and algorithm, including use of queue, marking nodes, levels of the tree, non-tree edges, time-complexity
    - BFS and shortest path to nodes in terms of edge traversals

- DFS
    - The strategy and algorithm, including use of recursion, marking nodes, levels of the tree, non-tree edges, discovery/finish times, time-complexity, recognizing back-edges
    - No questions on version that uses stack, only recursive approach
    - Using DFS-sweep() to process all nodes, find connected components, etc.
    - For undirected graphs:  back-edges mean cycles; edges only categorized as tree or back-edges
    - For directed graphs: only back-edges mean cycles; also cross and descendant edges (know these don't indicate cycles, but you don't know how to distinguish between cross and descendent)
    - Using DFS to find a path between two vertices (if it exists)
    - Using DFS and/or BFS for problems: is graph acyclic, finding connected components, other relatively simple problems done in lecture etc.
    - Properties of BFS and DFS trees (some HW questions focused on these trees)
    
- Topological Sorting and SCCs in a Digraph
    - What the problem is Topological Sorting about, how it's used to model dependencies
    - Solution using DFS based on finish times

- Strongly connected components: what they are, how we use DFS and a graph's transpose to find these, relation to topological sorting

- Kruskal's Minimum Spanning Tree Algorithm
    - The strategy and algorithm, how to find next edge to add to solution, use of sorting or heap
    - The need and use of set operations Union and Find in Kruskal's
    - The Find/Union data structure: the basics, union-by-rank, path-compression
    - Time complexity for Kruskal's with Find/Union and its optimizations
    
- Dijkstra's Shortest Path and Prim's MST algorithm
    - For both, the overall strategy, use of priority-queue, updating info about connections to nodes that might be selected next, differences between the two
    - Why decrease-key operation affects our time-complexity
    - How to use indirect heaps to make decrease-key more efficient
    - Overall time-complexity for Dijkstra's and Prim's
    - Possibly questions on proof strategy for Dijkstra's (not Prim's). You won't be asked to recreate the proof, but maybe questions on how it was proved


Topics that will *not* be covered on the quiz include:
-------------------------------------------------

- Nothing on proving the correctness for BFS's shortest distance properties 
- You don't know how to distinguish between cross and descendent edges in DFS
