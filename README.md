# CareerCup_Google

http://www.careercup.com/page?pid=google-interview-questions

---
#### 1. http://www.careercup.com/question?id=5721714044436480
You are given a String of number characters (S), like the following for example: 
"132493820173849029382910382" 
Now, let's assume we tie letters to numbers in order such that: 
A = "0" 
B = "1" 
C = "2" 
... 
M = "12" 
N = "13" 
... 
Y = "24" 
Z = "25" 
Write an algorithm to determine how many strings of letters we can make with S, by converting from numbers to letters.

[code](decode.cpp)

---
#### 2. http://www.careercup.com/question?id=5763205307564032
you have experience with a 3x3 Sudoku.Think about 2*2 sudoku: 

The array has 4 rows and 4 columns. 
The numbers 1, 2, 3 and 4, each appears exactly once in each row. 
The numbers 1, 2, 3 and 4, each appears exactly once in each column. 
The numbers 1, 2, 3 and 4, each appears exactly once in the 2x2 square formed by the intersection of rows 1, 2 and columns 1, 2. 
The numbers 1, 2, 3 and 4, each appears exactly once in the 2x2 square formed by the intersection of rows 1, 2 and columns 3, 4. 
The numbers 1, 2, 3 and 4, each appears exactly once in the 2x2 square formed by the intersection of rows 3, 4 and columns 1, 2. 
The numbers 1, 2, 3 and 4, each appears exactly once in the 2x2 square formed by the intersection of rows 3, 4 and columns 3, 4. 
Your task is: 
1. Count all possible different solutions of the 2*2 sudoku. 
2.Print all solutions. 
3.Store all solutions.

[code](sudoku2.cpp)

---
#### 3. http://www.careercup.com/question?id=5698055485521920
A book contains with pages numbered from 1 - N. Imagine now that you concatenate all page numbers in the book such that you obtain a sequence of numbers which can be represented as a string. You can compute number of occurences 'k' of certain digit 'd' in this string. 

For example, let N=12, d=1, hence 
s = '123456789101112' => k=5 
since digit '1' occure five times in that string. 
Problem: Write a method that, given a digit 'd' and number of its occurences 'k', returns a number of pages N. More precisely, return a lower and upper bound of this number N. 

Example: 
input: d=4, k=1; 
output {4, 13} - the book has 4-14 pages 

input d=4 k=0; 
output {1, 3} - the book has 1-3 pages

[code](3.cpp)
