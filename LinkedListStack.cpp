#include "LinkedListStack.h"


#pragma region Constructor and Destructor
LinkedListStack::LinkedListStack() {
	top = nullptr;
}

LinkedListStack::~LinkedListStack() 
{
}

#pragma endregion 


#pragma region Stack Operation Member Function Implementations

/** isStackEmpty
	Should 'top' be null, the stack is empty. 	
@param: void
@return: boolean; true/false depending on 'top'.
*/
bool LinkedListStack::isStackEmpty() const {
	return top == nullptr;
}

/** pushToStack
	This replaces the top node of the stack with the newly created node,
	containing the passed character. 
	Sets the next node object as the top, then moves current to top value in stack.

@param character: char
@return: void
*/
void LinkedListStack::pushToStack(char character){
	auto *current = new StackNode;
	current->stackCharacter = character;
	current->next = top;
	top = current;
}

/** getTopNode
 	Returns the value of the top node 
@param: void
@return value of 'top': char
*/
char LinkedListStack::getTopNodeValue() const {
	if (isStackEmpty())
		ViewFormatter::outputMessage("No operators found.");
	return top->stackCharacter;
}

/** popFromStack
	Removes the top node from the stack
@param: void
@return: void
*/
void LinkedListStack::popFromStack() {
	auto *temp = top;
	top = top->next;
	delete temp;
}

#pragma endregion 
