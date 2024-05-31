#include <iostream>
#include <string>
using namespace std;

bool User_Inpyt(string input)
{
    if (input.empty()) return false;
	try
	{
		int number = stoi(input);
	}
	catch (...)
	{
		return false;
	}
	return true;
}
int CalcRectangleArea(int NumberA, int NumberB)
{
	return NumberA * NumberB + 100;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	string str_input;

	cout << "Введите длину стороны А: "<< endl;
	getline(cin, str_input);

	while (!User_Inpyt(str_input))
	{
		cout << "Повторите попытку!";
		getline(cin, str_input);
	}
	int NumberA = stoi(str_input);

	cout << "Введите длину стороны B: " << endl;
	getline(cin, str_input);

	while (!User_Inpyt(str_input))
	{
		cout << "Повторите попытку!";
		getline(cin, str_input);
	}
	int NumberB = stoi(str_input);

	int RenctangleArea = CalcRectangleArea(NumberA, NumberB);
	cout << "Площадь прямоугольника: " << RenctangleArea << endl;
}
