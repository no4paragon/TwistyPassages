Overview
Working with up to one partner. 

In this, the final assignment of the course, students must build a program from scratch that generates and displays square mazes of arbitrary size. After completing this assignment, students will:

Demonstrate the ability to think through an abstract problem and produce a working implementation. 
Use some of the abstract data types discussed throughout the semester. 
Implement a graph. 
Understand how one may use the depth-first-search algorithm to generate an object. 
Requirements
When launched without any command-line arguments, this program automatically generates a random maze forty rooms wide by forty rooms high. When launched with command-line arguments, if the argument is an integer between one and one-hundred, it produces a square maze of the provided width. After generating the maze, the program will print it to the screen. Were the user to launch this program with the following text: 

prog4 1
The program will produce output that looks like this:

XXX
X.X
XXX
When launched with:

prog4 2
The program may produce output that looks like this (it would be random):

XXXXX
X...X
X.XXX
X...X
XXXXX
When launched with:

prog4 3
The program may produce output that looks like this (it would be random):

XXXXXXX
X.....X
X.XXX.X
X...X.X
X.XXX.X
X...X.X
XXXXXXX
These examples uses '.' to indicate walkable spaces a 'X' to represent a wall. 

To be clear about the relationship between the size provided and the 'rooms' mentioned, here is the previous maze with numbers added at the middle of each room:

XXXXXXX
X1.2.3X
X.XXX.X
X4.5X6X
X.XXX.X
X7.8X9X
XXXXXXX
A maze of size 3x3 requires 9 rooms. Students must determine how to represent the maze in their own implementations. An array of room objects might work for some students, maps of doors may work for others. 

Algorithm
The strategy for generating a maze in this assignment requires depth-first-search. Using a stack and a way to keep track of where it visited in the past, the algorithm will produce dynamic mazes. 

Begin by marking all rooms in the graph as 'unvisited' (this may be placing them in a set . . or by not having them in a set based on how your mind works). 
Push the starting node into a stack of work to do (the starting node is the lower-left of the grid). 
While the stack of work is not empty:
Pop the top of the stack as the current node.
If the current node has been visited, ignore it and continue. 
Else load all of the current node's unvisited neighbors into the stack of work to do. 
Pick a random currently-unvisited neighbor and break down the wall, or build a door, between the two rooms. This will vary based on how you choose to represent your maze, so know how you are doing it before you proceed. 
Mark the current node visited.
When the stack is empty, the algorithm is finished, and the maze should now appear

Delivery
On or before the due date, students shall submit their version of their main program (e.g., main.cpp) and the output their program produced when they ran it locally with a size of 10 (I should see a random maze). 
