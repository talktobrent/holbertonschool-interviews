<h1>Warm Up</h1>
<p>At the end of this project, you are expected to be able to explain to anyone, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>Efficiently review material</li>
<li>Understand binary tree operations</li>
<li>Searching algorithms</li>
<li>How to query an API for specific information</li>
</ul>
<h2>Tasks</h2>
  <h3>
    0. Binary search
  </h3>
  <p>Write a function that searches for a value in a sorted array of integers using the Binary search algorithm</p>
<ul>
<li>Prototype : <code>int binary_search(int *array, size_t size, int value);</code></li>
<li>Where <code>array</code> is a pointer to the first element of the array to search in</li>
<li><code>size</code> is the number of elements in <code>array</code></li>
<li>And <code>value</code> is the value to search for</li>
<li>Your function must return the index where <code>value</code> is located</li>
<li>You can assume that <code>array</code> will be sorted in ascending order</li>
<li>You can assume that <code>value</code> won&rsquo;t appear more than once in <code>array</code></li>
<li>If <code>value</code> is not present in <code>array</code> or if <code>array</code> is <code>NULL</code>, your function must return <code>-1</code></li>
<li>Every time you split the array, you have to print the new array (or subarray) you&rsquo;re searching in (See example)</li>
<li>The prototypes of all your functions should be included in your header file called <code>search_algos.h</code></li>
<li>You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.</li>
</ul>
        <p>File: <code>0-binary.c</code></p>
  <h3>
    1. Dictionary of list of dictionaries
  </h3>
  <p>Remember what you did in task #0? Extend your Python script to export data in the JSON format.</p>
<p>Requirements:</p>
<ul>
<li>Records all tasks from all employees</li>
<li>Format must be: <code>{ &quot;USER_ID&quot;: [ {&quot;username&quot;: &quot;USERNAME&quot;, &quot;task&quot;: &quot;TASK_TITLE&quot;, &quot;completed&quot;: TASK_COMPLETED_STATUS}, {&quot;username&quot;: &quot;USERNAME&quot;, &quot;task&quot;: &quot;TASK_TITLE&quot;, &quot;completed&quot;: TASK_COMPLETED_STATUS}, ... ], &quot;USER_ID&quot;: [ {&quot;username&quot;: &quot;USERNAME&quot;, &quot;task&quot;: &quot;TASK_TITLE&quot;, &quot;completed&quot;: TASK_COMPLETED_STATUS}, {&quot;username&quot;: &quot;USERNAME&quot;, &quot;task&quot;: &quot;TASK_TITLE&quot;, &quot;completed&quot;: TASK_COMPLETED_STATUS}, ... ]}</code></li>
<li>File name must be: <code>todo_all_employees.json</code></li>
<li>The first line of all your files should be exactly <code>#!/usr/bin/python3</code></li>
<li>Libraries imported in your Python files must be organized in alphabetical order</li>
<li>Your code should use the <code>PEP 8</code> style</li>
<li>All your files must be executable</li>
<li>All your modules should have a documentation (<code>python3 -c &#39;print(__import__(&quot;my_module&quot;).__doc__)&#39;</code>)</li>
<li>Your code should not be executed when imported (by using <code>if __name__ == &quot;__main__&quot;:</code>)</li>
</ul>
        <p>File: <code>1-dictionary_of_list_of_dictionaries.py</code></p>
  <h3>
    2. Is full
  </h3>
  <p>Write a function that checks if a binary tree is full</p>
<ul>
<li>Prototype: <code>int binary_tree_is_full(const binary_tree_t *tree);</code></li>
<li>Where <code>tree</code> is a pointer to the root node of the tree to check</li>
<li>If <code>tree</code> is <code>NULL</code>, your function must return <code>0</code></li>
<li>You are allowed to use the standard library</li>
</ul>
<p>Data structures</p>
<p>Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.</p>
<p>Basic Binary Tree</p>
<p>(print function if you need it &hellip; )</p>
        <p>File: <code>2-binary_tree_is_full.c</code></p>
  <h3>
    3. Slide line
  </h3>
  <p>The goal of this task is to reproduce the 2048 game(NSFW !!) mechanics on a single horizontal line.</p>
<p>Given an array of integers, we want to be able to slide &amp; merge it to the left or to the right. Identical numbers, if they are contiguous or separated by zeros, should be merged (See example)</p>
<ul>
<li>Write a function that slides and merges an array of integers</li>
<li>Prototype: <code>int slide_line(int *line, size_t size, int direction);</code></li>
<li>Where <code>line</code> points to an array of integers containing <code>size</code> elements, that must be slided &amp; merged to the direction represented by <code>direction</code>. <code>direction</code> can be either:
<ul>
<li><code>SLIDE_LEFT</code></li>
<li><code>SLIDE_RIGHT</code></li>
<li>If it is something else, the function must fail</li>
<li>Both macros <code>SLIDE_LEFT</code> and <code>SLIDE_RIGHT</code> must be defined in <code>slide_line.h</code></li>
</ul></li>
<li>Your function must return <code>1</code> upon success, or <code>0</code> upon failure</li>
<li>You are <strong>not allowed</strong> to allocate memory dynamically (malloc, calloc, …)</li>
</ul>
        <p>File: <code>0-slide_line.c</code></p>
