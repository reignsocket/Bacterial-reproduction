Problem Description  
The rate of reproduction of a bacterium is multiplied daily. For example, there are 10 on the first day and 20 on the second day.
It became 40 on the third day and 80 on the fourth day. Now give the date of the first day and the number of bacteria, ask you to write the program to find the number of bacteria on a certain day.

  
Input data  
The first line has an integer n indicating the number of test data. The next n lines have 5 integers per line, between integers
Separated by a space. The first number represents the month of the first day, the second number represents the date of the first day, the third number represents the number of bacteria on the first day, and the fourth number represents the month of the requested day, the fifth number Indicates the date of the requested day. It is known that the first day and the requested day are in the same year and that year is not a leap year, and the requested day must be after the first day. The number of bacteria required for one day of data assurance is in the range of integers.
  
  
Output requirements  
For each set of test data, a line is output that contains an integer that is the number of bacteria required for the day.  
  
Input sample  
2  
1 1 1 1 2  
2 28 10 3 2
  
Output sample  
2  
40  
  
Problem solving  
This question is actually the number of days between the given two days. The number of bacteria on the first day multiplied by the nth power of 2 is the answer to the question. Because the number of days per month is not very regular, it can be cumbersome to use rule descriptions in the program, so you can use an array to save the number of days per month. The entire calculation process can be described as follows:
Read the number of test samples n;  
Do n times:  
1. Read the number of bacteria on two dates and on the first day;  
2. Convert the two dates to the day of the current year;  
3. Get the difference between two days, that is, the number of days between them;  
4. Multiply the number of bacteria on the first day by the power of 2 m to wait for x;  
5. Output x;  
