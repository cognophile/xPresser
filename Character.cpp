#include"Character.h"

#pragma region Constructors/Destructor Implementation

Character::Character() 
{
}

Character::~Character()
{
}

#pragma endregion 


#pragma region Character Class Member Functions Implementation  

/** isAnOperand
	Determine whether parameter value is of type operand (excluding '(' and ')').
@param character: char
@return: boolean true (if operand)/false 
*/
 bool Character::checkIfOperand(char character) const {
	if (!checkIfOperator(character) &&
		character != '(' &&
		character != ')') {
		return true;
	}
	return false;
}

 /** isAnOperator
	 Determine whether the value passed parameter is an expected standard operator
 @param character: char
 @return: boolean true (if operator)/false
 */
 bool Character::checkIfOperator(char character) const {
	if (character == '+' || character == '-' ||
		character == '*' || character == '/') {
		return true;
	}
	return false;
}

/** evaluatePrecedence
	 Determine which operator has higher precedence. 
 @param operatorA: char
 @param operatorB: char
 @return: integer	-1 (Operator A has higher precedence) 
					 0 (Operators A and B have equal precedence) 
					 1 (Operator B has higher precedence)
*/ 
 int Character::evaluateOperatorPriority(char operatorA, char operatorB) const {
	if ((operatorA == '*' || operatorA == '/') && (operatorB == '+' || operatorB == '-')) {
		return -1;
	}
	else if ((operatorA == '+' || operatorA == '-') && (operatorB == '*' || operatorB == '/')) {
		return 1;
	}
	return 0;
}

#pragma endregion


