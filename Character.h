#pragma once

class Character {
public:
	Character();
	~Character();


#pragma region Member Function Prototype Declarations 

	bool checkIfOperand(char character) const;

	bool checkIfOperator(char character) const;

	int evaluateOperatorPriority(char operatorA, char operatorB) const;

#pragma endregion 

};