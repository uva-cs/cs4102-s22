---
layout: default
title: CS4102 Algorithms - Spring 2022 
---
# Topics for Unit D Exam: CS4102 Algorithms - Spring 2022

Document Version: 1.0, 5/4/2022 


Overview
---------------------------------------

The Unit D Exam is on lectures and readings from April 14 through the end of term.  The following topic list is a guide, and we may update it before the exam in response to student questions.  See the slides and recordings for more details and readings associated with these topics.  A basic rule we'll try to follow is this: if it's in the readings, but we didn't mention it in lecture, it will *not* be on the exam.

Basic homework questions for this unit are designed to help prepare you for the exam.


How the Exams Will Be Given and Other Rules
----------------------------------------------
The Exam will first be given on paper and in-class during the final exam period on Tuesday, May 10, at 7:00 pm.

Important: since we'll also be giving re-takes for two other exams during the final exam period, to control the complexity of passing out exams, we will distribute the Unit D exam first, so everyone will start on that at 7:00 pm.  When you complete that exam and turn it in, you can pick up a copy of any re-take exam you want to do.

The Exam will be closed-book, closed-notes, etc.  Getting information from any electronic devices is not allowed while taking an exam. 
It is an honor violation to communicate information about the exam to anyone who might not have yet taken it. You will sign a pledge about these rules.


Topics that might be covered on the Unit D Exam include:
-------------------------------------------------
- Network Flow Problems and Analysis
    - Network flow problems
    - Augmenting paths
    - Dealing with backflow edges, representation of residual graph, etc.
    - Ford Fulkerson Algorithm and Analysis
    - Ford Fulkerson Correctness
    - Edmunds-Karp algorithm: how it differs from F-F, when it might be more efficient
- Max-Flow Min-Cut Theorem
    - Minimum Cut, definition of a cut, etc.
    - What the max-flow min-cut theorem states, how of cuts and augmenting paths are part of that proof

- Network Flow Reductions
	- Edge-disjoint paths and vertex-disjoint paths
    - Definition of a reduction
    - Bi-partite matching
    - Reductions to network flow and relationship between bi-partite matching problems and network flow.
	- Given two problems, describe a reduction. This will at the same level as the problem in the basic HW. It will NOT be like the reductions done to show a problem is NP-Hard (i.e. those in the final lectures and in Adv. HW)

- NP-Completeness etc.
	- Decision problems vs. optimal values vs. optimal solutions
	- Definitions of class P, NP, NP-hard, and NP-C
	- NP-C problems: SAT, CNF-SAT, 3-SAT, VertexCover, MaxIndSet, k-Clique, SubsetSum
	- How to prove that a problem is in NP (verification algorithm)
	- What is a polynomial reduction? What's it mean if problem A reduces to problem B?
	- The Cook-Levin Theorem: what it is, what it means, why it's significant
	- The relationship between P, NP and NP-complete
	    - The big question: does P = NP?
	- Reductions: You won't be asked to come up with a "new" reduction to show NP-Hardness on your own. You need to know what a reduction is, and how it's described. You might be asked questions about these example reductions:
	    - 3-CNF to k-Clique (slides, book)
	    - 3-CNF to MaxIndSet (slides, book)


Topics that will *not* be covered on the exam include:
-------------------------------------------------

- No reductions like those in the Adv. HW, where we give you a problem and ask you to find a reduction from a known NP-Hard problem to that problem
- Questions about NP-Hard/NP-C problems mentioned in class but not on the list above



