#include <iostream>
/*	Demonstrates stack abstract data type
	Usage: push items a, b, c, and d onto the stack as desired; access top of stack; pop item off stack
	The variables a, b, c, and d are shown in three data types: int, double, a a custom class Planet
	The type being used should be uncommented - all other types should be commented
	Place the correct type in the statement MyTStackADT<"Enter the type here"> stack;
*/
#include "mytstackadt.h"
#include "planet.h"
#include <string>


int main()
{
//	Planet a{"Mercury", 0.39};
//	Planet b{"Pluto", 39.53};
//	Planet c{"Mars", 1.524};
//	Planet d{"Saturn", 9.539};

//	
//	double a = 3.14159,		b = 2.7178,		c = 1.618,		d = 1.414;
	int a = 67,		b = 18,		c = 93,		d = 46;


	MyTStackADT<int> stack;

	std::cout << "Initial Stack size " << stack.size() << std::endl;
	std::cout << "Pushing " << a << std::endl;
	stack.push(a);
	std::cout << "Stack has " << stack.size() << " item(s) - Top: " << stack.top() << std::endl;
	std::cout << "Pushing " << b << std::endl;
	stack.push(b);
	std::cout << "Stack has " << stack.size() << " item(s) - Top: " << stack.top() << std::endl;
	std::cout << "Popping top item\n";
	stack.pop();
	std::cout << "Stack has " << stack.size() << " item(s) - Top: " << stack.top() << std::endl;
	std::cout << "Pushing " << c << std::endl;
	stack.push(c);
	std::cout << "Stack has " << stack.size() << " item(s) - Top: " << stack.top() << std::endl;
	std::cout << "Pushing " << d << std::endl;
	stack.push(d);
	std::cout << "Stack has " << stack.size() << " item(s) - Top: " << stack.top() << std::endl;
}