#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}
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
