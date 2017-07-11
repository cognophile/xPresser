#include"Expression.h"

#pragma region Destructor Implementation 

Expression::~Expression()
{
}

#pragma endregion 

#pragma region Expression Class Member Functions Implementation

/** ConvertToPostfix
	Core algorithm to process input expression & build output expression.
@param: void
@return: void
*/
void Expression::ConvertToPostfix() {

	// Initialise Stack Structure and character object for evaluating each character of string  
	std::unique_ptr<Character> character;
	std::unique_ptr<LinkedListStack> stack(new LinkedListStack());

	for (auto i = 0; i < inputInfix.length(); i++) {
		
		// When the character is an operand, immediately add it to the stack
		if (character->checkIfOperand(inputInfix[i])) {
			outputPostfix += inputInfix[i];
		}

		// When the character is a valid operator, evaluate what order to add 
		//	the operators to the output when not in a paren block
		else if (character->checkIfOperator(inputInfix[i])) {
			while (!stack->isStackEmpty() && 
					stack->getTopNodeValue() != '(' && 
					character->evaluateOperatorPriority(stack->getTopNodeValue(), inputInfix[i]) <= 0) 
			{
				outputPostfix += stack->getTopNodeValue();
				stack->popFromStack();
			}
			stack->pushToStack(inputInfix[i]);
		}
		
		// When the character is an opening parenthesis, immediately add it to the stack
		else if (inputInfix[i] == '(') {
			stack->pushToStack(inputInfix[i]);
		}
		
		// When the character is a closing parenthesis, add all operators from within 
		//	the parens to our output until we find its closing sibling
		else if (inputInfix[i] == ')') {
			while (!stack->isStackEmpty()) {
				if (stack->getTopNodeValue() == '(') {
					stack->popFromStack();
					break;
				}
				outputPostfix += stack->getTopNodeValue();
				stack->popFromStack();
			}
		}
	}

	// Append all remaining operators on the stack to the output in reverse order of which they were added
	while (!stack->isStackEmpty()) {
		outputPostfix += stack->getTopNodeValue();
		stack->popFromStack();
	}
}

	#pragma region Display Member Variable Values

/** displayInfix()
@param: void
@return: void
*/
void Expression::displayInfix() const {
	ViewFormatter::outputValue("Infix Expression: ", inputInfix);
}

/** displayPostfix()
@param: void
@return: void
*/
void Expression::displayPostfix() const {
	ViewFormatter::outputValue("Postfix Expression: ", outputPostfix);
}

	#pragma endregion 

#pragma endregion 

