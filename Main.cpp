#include <iostream>

using namespace std;

int main()
{

	string jsrc_console_input = ":default"; cin >> jsrc_console_input;

	if (jsrc_console_input == ":default")
		cout << "Default output in Jsource console." << endl;

	if (jsrc_console_input == ":test1")
	{
		cout << "test_console" << endl;
	}

	if (jsrc_console_input == ":test_input_system")
	{
		short jsrc_test_insys;
		cout << "enter data: "; cin >> jsrc_test_insys;
		cout << jsrc_test_insys;
	}

	if (jsrc_console_input == ":math_table")
	{
		double jsrc_mt_1, jsrc_mt_2, result1, result2, result3, result4;

		cout << "Enter numbers: " << endl;
		cin >> jsrc_mt_1; cin >> jsrc_mt_2;
		cout << "" << endl;

		result1 = jsrc_mt_1 + jsrc_mt_2; result2 = jsrc_mt_1 - jsrc_mt_2;
		result3 = jsrc_mt_1 / jsrc_mt_2; result4 = jsrc_mt_1 * jsrc_mt_2;

		cout << "Addition: " << result1 << endl; cout << "Subtraction: " << result2 << endl;
		cout << "Separation: " << result3 << endl; cout << "Multiplication: " << result4 << endl;
	}

	return 0;
}