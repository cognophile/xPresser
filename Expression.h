#pragma once 

#include <memory>
#include "Character.h"
#include "LinkedListStack.h"

class Expression{
private:
	string inputInfix = ("");
	string outputPostfix = ("");

public:

#pragma region Constructors/Destructor Function Prototype Declarations
	
	Expression(string expressionInput) : inputInfix (expressionInput) {}
	~Expression();

#pragma endregion 

#pragma region Member Function Prototype Declarations 

	void convertToPostfix();

	void displayInfix() const;
	void displayPostfix() const;

#pragma endregion 
};

