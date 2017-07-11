/*
	Version:		1.6
	License:		MIT - see LICENSE.md
	Author:			Copyright © 2017 cognophile (https://github.com/cognophile)
*/

#include "ViewFormatter.h"
#include "Expression.h"
#include <algorithm>

using std::transform;
using std::cin;

int main() {

	string expressionInput = ("");
	string terminateCommand = ("exit");

	ViewFormatter::renderHeader();

	do {
		// Request and store user Infix Expression
		ViewFormatter::outputMessage("Type \"exit\" to close the converter");
		ViewFormatter::renderSpace();
		
		ViewFormatter::outputMessage("Enter your infix expression: ");
		getline(cin, expressionInput, '\n');

		if (expressionInput != terminateCommand) {
				std::unique_ptr<Expression> expression(new Expression(expressionInput));

				expression->ConvertToPostfix();

				ViewFormatter::renderSpace();
				expression->displayInfix();
				expression->displayPostfix();
				ViewFormatter::renderFooter();

		} else {
			
			ViewFormatter::outputMessage("Exiting...");

			ViewFormatter::renderFooter();
		}
	} while (expressionInput != terminateCommand);

	return 0;
}