#pragma once

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;
using std::setfill;
using std::setw;
using std::string;

class ViewFormatter {
public:

#pragma region Header/Footer Rendering Functions Prototype Declarations 

	static void renderHeader();
	static void renderFooter();

#pragma endregion

#pragma region Space Rendering Function Prototype Declaration

	static void renderSpace();

#pragma endregion

#pragma region Message Rendering Functions Prototype Declarations 

	static void outputMessage(string message);
	static void outputValue(string message, string value);

#pragma endregion
};