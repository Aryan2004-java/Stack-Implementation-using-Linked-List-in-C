# Stack-Implementation-using-Linked-List-in-C
This project implements a Stack using a singly linked list in C. The stack follows the LIFO (Last In, First Out) principle, allowing users to perform operations such as push, pop, peek, and display.
Features
This program provides the following stack operations:

Push – Insert an element onto the stack.
Pop – Remove the top element from the stack.
Peek – View the top element without removing it.
Display – Show all elements in the stack.
Exit – Terminate the program.
Functions and Their Purpose
Function	Description
push(struct Node** top, int value)	Inserts an element at the top of the stack.
pop(struct Node** top)	Removes and returns the top element.
peek(struct Node* top)	Returns the top element without removing it.
display(struct Node* top)	Prints all elements in the stack.
Edge Cases Handled
Stack Overflow: If memory allocation fails, a warning is displayed.
Stack Underflow: If a pop or peek operation is performed on an empty stack, an error message is shown.
Possible Enhancements
Implement a doubly linked list for additional efficiency.
Add a size function to return the number of elements in the stack.
Implement a reverse function to reverse the stack.
