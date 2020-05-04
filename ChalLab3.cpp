//hw1.cpp
//Isaiah Kiefer
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <fstream>
#include <regex>
using namespace std;
using std::string;
using std::setprecision;
using std::endl;
using std::cin;
using std::cout;
using std::ifstream;
using std::ofstream;



int main()
{

	ifstream text;
	regex a("a");
	regex b("b");
	regex c("c");
	regex d("d");
	regex e("e");
	regex f("f");
	regex g("g");
	regex h("h");
	regex i("i");
	regex j("j");
	regex k("k");
	regex l("l");
	regex b("b");
	regex b("b");
	regex b("b");
	regex b("b");
	regex b("b");
	regex b("b");

	int totCount = 0;


	text.open("input.txt");
	string line;
	char str[256];
	while (!text.eof())
	{
		text.getline(str, 255);
		for (int i = 0; i < sizeof(str); i++)
		{
			if (str[i] == 'a')
			{
				cout << "Test";
			}

		}
		text.close();
	}
