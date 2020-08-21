/*
Student Name: Nathan Cheshire
Student NetID: nvc29
Compiler Used: Visual Studio Community Edition 2019
Program Description:
This header file contains the code for the templated Stack and Node which the stack utilizes.
Also contained below those two classes are the custom data types, pizza and soda, written to be used for testing with the templated stack.
*/

#pragma once
#include <iostream>

//standard namespace
using namespace std;

template <typename T>

//Node class implementation
class stackNode
{
	//Everything is public since we are not accessing node directly through our main program
	public:

		//each node in this case had data and a next (below) pointer
		T data;
		stackNode* below;

		//Constructor
		stackNode(T data, stackNode* below)
		{
			this->data = data;
			this->below = below;
		}
};

//Stack class implementation
template <typename T>
class Stack
{
	private:
		//The top node is kept private so it cannot be changed directly
		stackNode<T>* top;

	public:

		//Exception for attemptin to access data on an empty stack
		static const int EmptyStackException = 111;

		//default constructor
		Stack()
		{
			top = nullptr;
		}

		//constructor with starting data
		Stack(T data)
		{
			top = new stackNode<T>(data, nullptr);
		}


		//push method
		void Push(T data)
		{
			stackNode<T>* tmp = new stackNode<T>(data, top);

			top = tmp;
		}

		//pop method
		T Pop()
		{
			//if we cant pop
			if (isEmpty())
			{
				throw EmptyStackException;
			}

			stackNode<T>* tmp = top;
			top = top->below;
			T copy = tmp->data;
			delete tmp;
			return copy;
		}

		//peek method
		T peek()
		{
			//if we cant peek
			if (isEmpty())
			{
				throw EmptyStackException;
			}

			return top->data;
		}

		//isEmpty method
		bool isEmpty()
		{
			if (top == nullptr)
			{
				return true;
			}

			return false;
		}

		//Operator overload of <<
		friend ostream& operator<<(ostream& os, const Stack& stack)
		{
			//if the stack is not empty
			if (stack.top != nullptr)
			{
				//the stack has one node
				if (stack.top->below == nullptr)
				{
					os << stack.top->data;
				}

				//the stack has more than one node (at least two)
				else
				{
					//start at the top
					stackNode<T>* start = stack.top;

					//while our node's below does not point to null
					while (start->below != nullptr)
					{
						//shift our node's data to os
						os << start->data << " ";

						//go to the next node
						start = start->below;
					}

					//since we are at the last node, get its data and shift it to os.
					os << start->data << " ";
				}
			}

			//the stack is empy
			else
			{
				os << "Empty stack";
			}

			return os;
		}
};

//custom data type soda for testing templated stack
class Soda
{
	private:

		string flavor;
		int ounces;

	public:

		Soda()
		{
			flavor = "Classic";
			ounces = 16;
		}

		Soda(string flav, int ounce)
		{
			flavor = flav;
			ounces = ounce;
		}

		string getFlavor()
		{
			return flavor;
		}

		void setFlavor(string newflav)
		{
			flavor = newflav;
		}

		int getOunces()
		{
			return ounces;
		}

		void setOunces(int newounce)
		{
			ounces = newounce;
		}

		friend ostream& operator<<(ostream& os, const Soda& soda)
		{
			os << "[" << soda.flavor << " flavored; " << soda.ounces << "oz]";

			return os;
		}
};

//custom data type pizza for testing templated stack
class Pizza
{
	private:

		string flavor;
		int inches;

	public:

		Pizza(string flav, int inch)
		{
			flavor = flav;
			inches = inch;
		}

		Pizza()
		{
			flavor = "Cheese";
			inches = 12;
		}

		string getFlavor()
		{
			return flavor;
		}

		void setFlavor(string newflav)
		{
			flavor = newflav;
		}

		int getInches()
		{
			return inches;
		}

		void setOunces(int newinch)
		{
			inches = newinch;
		}

		friend ostream& operator<<(ostream& os, const Pizza& pizza)
		{
			os << "[" << pizza.flavor << " pizza, " << pizza.inches << " inches]";

			return os;
		}
};