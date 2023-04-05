

  <div class="description user_content enhanced"><h2>Overview</h2>
<p>Working with up to one partner.&nbsp;</p>
<p>In this, the final assignment of the course, students must build a program from scratch that generates and displays square mazes of arbitrary size. After completing this assignment, students will:</p>
<ul>
<li>Demonstrate the ability to think through an abstract problem and produce a working implementation.&nbsp;</li>
<li>Use some of the abstract data types discussed throughout the semester.&nbsp;</li>
<li>Implement a graph.&nbsp;</li>
<li>Understand how one may use the depth-first-search algorithm to generate an object.&nbsp;</li>
</ul>
<h2>Requirements</h2>
<p>When launched without any command-line arguments, this program automatically generates a random maze forty rooms wide by forty rooms high. When launched with command-line arguments, if the argument is an integer between one and one-hundred, it produces a square maze of the provided width. After generating the maze, the program will print it to the screen. Were the user to launch this program with the following text:&nbsp;</p>
<pre>prog4 1</pre>
<p>The program will produce output that looks like this:</p>
<pre>XXX<br>X.X<br>XXX</pre>
<p>When launched with:</p>
<pre>prog4 2</pre>
<p>The program may produce output that looks like this (it would be random):</p>
<pre>XXXXX<br>X...X<br>X.XXX<br>X...X<br>XXXXX</pre>
<p>When launched with:</p>
<pre>prog4 3</pre>
<p>The program may produce output that looks like this (it would be random):</p>
<pre>XXXXXXX<br>X.....X<br>X.XXX.X<br>X...X.X<br>X.XXX.X<br>X...X.X<br>XXXXXXX</pre>
<p>These examples uses '.' to indicate walkable spaces a 'X' to represent a wall.&nbsp;</p>
<p>To be clear about the relationship between the size provided and the 'rooms' mentioned, here is the previous maze with numbers added at the middle of each room:</p>
<pre>XXXXXXX<br>X1.2.3X<br>X.XXX.X<br>X4.5X6X<br>X.XXX.X<br>X7.8X9X<br>XXXXXXX</pre>
<p>A maze of size 3x3 requires 9 rooms. Students must determine how to represent the maze in their own implementations. An array of room objects might work for some students, maps of doors may work for others.&nbsp;</p>
<h3>Algorithm</h3>
<p>The strategy for generating a maze in this assignment requires depth-first-search. Using a stack and a way to keep track of where it visited in the past, the algorithm will produce dynamic mazes.&nbsp;</p>
<ol>
<li>Begin by marking all rooms in the graph as 'unvisited' (this may be placing them in a set . . or by not having them in a set based on how your mind works).&nbsp;</li>
<li>Push the starting node into a stack of work to do (the starting node is the lower-left of the grid).&nbsp;</li>
<li>While the stack of work is not empty:</li>
<li style="list-style-type: none;">
<ol>
<li>Pop the top of the stack as the current node.</li>
<li>If the current node has been visited, ignore it and continue.&nbsp;</li>
<li>Else load all of the current node's&nbsp;<em>unvisited</em> neighbors into the stack of work to do.&nbsp;</li>
<li>Pick a random currently-unvisited neighbor and break down the wall, or build a door, between the two rooms. This will vary based on how you choose to represent your maze, so know how you are doing it before you proceed.&nbsp;</li>
<li>Mark the current node visited.</li>
</ol>
</li>
</ol>
<p>When the stack is empty, the algorithm is finished, and the maze should now appear</p>
