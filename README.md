# Lab3Mod3
CST126
Module 3: Lab 3

Word-Finding Program

Write a program that reads in a text file a word at a time.
The FIRST time that a word is encountered, store the word in a dynamically created array. DO NOT add a word more than one time.
Create a parallel, dynamic integer array to hold a count of the number of times that each particular word appeared in the text file. Be sure to increment the corresponding word frequency counter in the parallel integer array each time the word appears.
Different capitalization does NOT indicate a different word.
Be sure to remove any non-alpha characters from the beginning or ends of the words (internal non-alpha words are OK, such as “non-alpha”).

Create and use the following text file containing a quote from Albert Einstein to test your program:

The definition of insanity is doing the same thing over and over and expecting different results.

At the end of your program, generate a report that prints the contents of your two array in a format similar to the following:

Word:		Frequency:
The		    2
definition	    1
of		    1
insanity	    1
over		    2
and		    2

Once your program works with the test file shown above, create or find a much bigger file and rerun your program to see if it still works correctly.

Submit: full development process
20 pts


Person Structure
Write a program that has the following functionality:
Define a structure that has a string for a person’s first name, an integer for a person’s age, and a character for a person’s gender.
Create a data file that consists of five records based on the information above.
Create an array of structures and pass that array to a function called ReadData where the array will be filled by reading from the data file.
Create a function called DisplayOne that is passed one element of the array by value and is then displayed to the screen.
Create a function called EditRef that is passed an element of the array by reference. The function will then allow the user to edit the information in the structure.
Create another function called EditPointer that has the same functionality as EditRef except that the structure is passed by pointer.

Submit: full development process
10 pts


Sample Class
Consider the class below:
class Sample
 
{
public:
short int getAge();
 
private:
short int m_age;
float m_shoe_size;
};
 
short int Sample::getAge()
{
return m_age;
}

Complete the following tasks:
Part I:
Put this class into Sample.h file that the following tasks call from a cpp file.
Write the statement to instantiate an object called s1 based on the class Sample.
Using the object you just created, write the statement to call the function getAge and display the value returned.
Write the statement to instantiate an array called s2 containing 10 instances of the class Sample.
Using the array variable just created, call the function getAge with the second element and display the returned value.
Write the statement to dynamically allocate an instance of the Sample class, assigning the address into a pointer called s3.
Using the variable s3, call the function getAge and display the value returned.
Part II:
Write the statement to delete the memory you dynamically allocated.
Write a default constructor that assigns age and shoe size the value 0. Within the body of your constructor, display a message to the screen indicating that this constructor has been called.
Write another constructor that takes two parameters: one for age and one for shoe size. Set the shoe size to 8 using a default argument. Within the body of the function, do any necessary assignment statements and display an informative message indicating that this specific ctor was executed.
Create another instance of the Sample class called s1 passing in the initial value of 18 for the age.
Note that using the “Sample.h” file is part of “implementation hiding.”
Explain what else is part of implementation hiding in this class.

Write a program to test your class and ensure that it is working properly.
Be sure to give appropriate error messages if indicated.

Submit: full development process
20 pts

Total: 50 pts

