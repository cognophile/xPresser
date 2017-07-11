#include "ViewFormatter.h"

void ViewFormatter::renderHeader() {
	cout << setfill('-') << setw(80) << '-' << endl;
	cout << setfill(' ') << setw(56) << "xPresser - Infix to Postfix Converter" << endl;
	cout << setfill(' ') << setw(54) << "Type \"exit\" to close the converter" << endl;
	cout << setfill('-') << setw(80) << '-' << endl;
	cout << endl;
}

void ViewFormatter::renderFooter() {
	cout << endl;
	cout << setfill('-') << setw(80) << '-' << endl;
	cout << endl;
}

void ViewFormatter::renderSpace() {
	cout << endl;
}

void ViewFormatter::outputMessage(std::string message) {
	cout << endl;
	cout << setfill(' ') << setw(32) << message;
}

void ViewFormatter::outputValue(string message, string value) {
	cout << setfill(' ') << setw(32) << message << value << endl;
}
