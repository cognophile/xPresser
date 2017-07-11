#pragma once 

#include "ViewFormatter.h"

class LinkedListStack{
private:
	struct StackNode
	{
		char stackCharacter;

		StackNode *next;
	};

	StackNode *top;

public:
	#pragma region Member Function Prototype Declarations

	LinkedListStack();
	~LinkedListStack();

	void pushToStack(char character);
	void popFromStack();
	
	bool isStackEmpty() const;
	char getTopNodeValue() const;

	#pragma endregion
};

