/*
Student Name: Nathan Cheshire
Student NetID: nvc29
Compiler Used: Visual Studio Community Edition 2019
Program Description:
This program is the second programming assignment for CSE2383; template the stack you previously implemented
and test it on the following data types: int, double, string, and two custom data types you implement that follow
the requirements in the instructions PDF.
*/

#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
	cout << "integer------------------------------------------------------------------------------------------" << endl;

	//create new stack of ints
	Stack<int> intStack;

	cout << "[1] Push at least 3 elements onto the stack" << endl;

	intStack.Push(1);
	intStack.Push(2);
	intStack.Push(3);
	intStack.Push(4);
	intStack.Push(5);

	cout << "[2] Output the contents of the stack: " << intStack << endl;

	cout << "[3] Peek at the top of the stack:\n[4] Output the results of peek: " << intStack.peek() << endl;

	cout << "[5] Pop all but one element from the stack:" << endl;

	intStack.Pop();
	intStack.Pop();
	intStack.Pop();
	intStack.Pop();

	cout << "[6] Output the contents of the stack: " << intStack << endl;

	cout << "[7] Pop the last element of the stack:" << endl;

	cout << "[8] Output the results of the pop: " << intStack.Pop() << endl;

	cout << "[9] Peek at the top of the stack: ";

	try
	{
		 cout << intStack.peek() << endl;
	}

	catch (int n)
	{
		if (n == 111)
		{
			cout << "EmptyStackException" << endl;
		}
	}

	cout << "double------------------------------------------------------------------------------------------" << endl;

	//create new stack of doubles
	Stack<double> doubleStack;

	cout << "[1] Push at least 3 elements onto the stack" << endl;

	doubleStack.Push(3.14);
	doubleStack.Push(29.0);
	doubleStack.Push(73.999);
	doubleStack.Push(0.003);
	doubleStack.Push(6500.4);

	cout << "[2] Output the contents of the stack: " << doubleStack << endl;

	cout << "[3] Peek at the top of the stack:\n[4] Output the results of peek: " << doubleStack.peek() << endl;

	cout << "[5] Pop all but one element from the stack:" << endl;

	doubleStack.Pop();
	doubleStack.Pop();
	doubleStack.Pop();
	doubleStack.Pop();

	cout << "[6] Output the contents of the stack: " << doubleStack << endl;

	cout << "[7] Pop the last element of the stack:" << endl;

	cout << "[8] Output the results of the pop: " << doubleStack.Pop() << endl;

	cout << "[9] Peek at the top of the stack: ";

	try
	{
		cout << doubleStack.peek() << endl;
	}

	catch (int n)
	{
		if (n == 111)
		{
			cout << "EmptyStackException" << endl;
		}
	}

	cout << "string------------------------------------------------------------------------------------------" << endl;

	//create new stack of strings
	Stack<string> stringStack;

	cout << "[1] Push at least 3 elements onto the stack" << endl;

	stringStack.Push("Nathan");
	stringStack.Push("Name Is");
	stringStack.Push("My");
	stringStack.Push("World");
	stringStack.Push("Hello");

	cout << "[2] Output the contents of the stack: " << stringStack << endl;

	cout << "[3] Peek at the top of the stack:\n[4] Output the results of peek: " << stringStack.peek() << endl;

	cout << "[5] Pop all but one element from the stack:" << endl;

	stringStack.Pop();
	stringStack.Pop();
	stringStack.Pop();
	stringStack.Pop();

	cout << "[6] Output the contents of the stack: " << stringStack << endl;

	cout << "[7] Pop the last element of the stack:" << endl;

	cout << "[8] Output the results of the pop: " << stringStack.Pop() << endl;

	cout << "[9] Peek at the top of the stack: ";

	try
	{
		cout << stringStack.peek() << endl;
	}

	catch (int n)
	{
		if (n == 111)
		{
			cout << "EmptyStackException" << endl;
		}
	}

	cout << "Custom data type Soda------------------------------------------------------------------------------------------" << endl;

	//create new stack of custom data type soda
	Stack<Soda> sodaStack;

	cout << "[1] Push at least 3 elements onto the stack" << endl;

	sodaStack.Push(Soda());
	sodaStack.Push(Soda("Grape", 12));
	sodaStack.Push(Soda("Dr. Pepper", 18));
	sodaStack.Push(Soda());
	sodaStack.Push(Soda("Mtn dew", 21));

	cout << "[2] Output the contents of the stack: " << sodaStack << endl;

	cout << "[3] Peek at the top of the stack:\n[4] Output the results of peek: " << sodaStack.peek() << endl;

	cout << "[5] Pop all but one element from the stack:" << endl;

	sodaStack.Pop();
	sodaStack.Pop();
	sodaStack.Pop();
	sodaStack.Pop();

	cout << "[6] Output the contents of the stack: " << sodaStack << endl;

	cout << "[7] Pop the last element of the stack:" << endl;

	cout << "[8] Output the results of the pop: " << sodaStack.Pop() << endl;

	cout << "[9] Peek at the top of the stack: ";

	try
	{
		cout << sodaStack.peek() << endl;
	}

	catch (int n)
	{
		if (n == 111)
		{
			cout << "EmptyStackException" << endl;
		}
	}

	cout << "Custom data type Pizza------------------------------------------------------------------------------------------" << endl;

	//create new stack of custom data type pizza
	Stack<Pizza> pizzaStack;

	cout << "[1] Push at least 3 elements onto the stack" << endl;

	pizzaStack.Push(Pizza());
	pizzaStack.Push(Pizza("Cheese", 24));
	pizzaStack.Push(Pizza("Pepperoni", 18));
	pizzaStack.Push(Pizza());
	pizzaStack.Push(Pizza("Meat Lovers", 10));

	cout << "[2] Output the contents of the stack: " << pizzaStack << endl;

	cout << "[3] Peek at the top of the stack:\n[4] Output the results of peek: " << pizzaStack.peek() << endl;

	cout << "[5] Pop all but one element from the stack:" << endl;

	pizzaStack.Pop();
	pizzaStack.Pop();
	pizzaStack.Pop();
	pizzaStack.Pop();

	cout << "[6] Output the contents of the stack: " << pizzaStack << endl;

	cout << "[7] Pop the last element of the stack:" << endl;

	cout << "[8] Output the results of the pop: " << pizzaStack.Pop() << endl;

	cout << "[9] Peek at the top of the stack: ";

	try
	{
		cout << pizzaStack.peek() << endl;
	}

	catch (int n)
	{
		if (n == 111)
		{
			cout << "EmptyStackException" << endl;
		}
	}
}