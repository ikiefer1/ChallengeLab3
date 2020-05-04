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
	//regex b("b");
	//regex b("b");
	//regex b("b");
	//regex b("b");
	//regex b("b");
	//regex b("b");

	double totCount = 0;
	int cA;
	int cB;
	int cC;
	int cD;
	int cE;
	int cF;
	int cG;
	int cH;
	int cI;
	int cJ;
	int cK;
	int cL;
	int cM;
	int cN;
	int cO;
	int cP;
	int cQ;
	int cR;
	int cS;
	int cT;
	int cU;
	int cV;
	int cW;
	int cX;
	int cY;
	int cZ;
	double comp;
	int label = 1;


	text.open("input.txt");
	string line;
	char str[256];
	while (!text.eof())
	{
		totCount = 0;
		comp = 0;
		cA = 0;
		cB = 0;
		cC = 0;
		cD = 0;
		cE = 0;
		cF = 0;
		cG = 0;
		cH = 0;
		cI = 0;
		cJ = 0;
		cK = 0;
		cL = 0;
		cM = 0;
		cN = 0;
		cO = 0;
		cP = 0;
		cQ = 0;
		cR = 0;
		cS = 0;
		cT = 0;
		cU = 0;
		cV = 0;
		cW = 0;
		cX = 0;
		cY = 0;
		cZ = 0;
		text.getline(str, 255);
		cout << str<<endl;

		cout << label << ")";
		label++;
		//for (int i = 0; i < sizeof(str); i++)
		//{
		//	tolower(str[i]);
		//}
		for (int i = 0; i < sizeof(str); i++)
		{
			if (str[i] == 'a')
			{
				cA++;
				totCount++;
			}
			if (str[i] == 'b')
			{
				cB++;
				totCount++;
			}
			if (str[i] == 'c')
			{
				cC++;
				totCount++;
			}
			if (str[i] == 'd')
			{
				cD++;
				totCount++;
			}
			if (str[i] == 'e')
			{
				cE++;
				totCount++;
			}
			if (str[i] == 'f')
			{
				cF++;
				totCount++;
			}
			if (str[i] == 'g')
			{
				cG++;
				totCount++;
			}
			if (str[i] == 'h')
			{
				cH++;
				totCount++;
			}
			if (str[i] == 'i')
			{
				cI++;
				totCount++;
			}
			if (str[i] == 'j')
			{
				cJ++;
				totCount++;
			}
			if (str[i] == 'k')
			{
				cK++;
				totCount++;
			}
			if (str[i] == 'l')
			{
				cL++;
				totCount++;
			}
			if (str[i] == 'm')
			{
				cM++;
				totCount++;
			}
			if (str[i] == 'n')
			{
				cN++;
				totCount++;
			}
			if (str[i] == 'o')
			{
				cO++;
				totCount++;
			}
			if (str[i] == 'p')
			{
				cP++;
				totCount++;
			}
			if (str[i] == 'q')
			{
				cQ++;
				totCount++;
			}
			if (str[i] == 'r')
			{
				cR++;
				totCount++;
			}
			if (str[i] == 's')
			{
				cS++;
				totCount++;
			}
			if (str[i] == 't')
			{
				cT++;
				totCount++;
			}
			if (str[i] == 'u')
			{
				cU++;
				totCount++;
			}
			if (str[i] == 'v')
			{
				cV++;
				totCount++;
			}
			if (str[i] == 'w')
			{
				cW++;
				totCount++;
			}
			if (str[i] == 'x')
			{
				cX++;
				totCount++;
			}
			if (str[i] == 'y')
			{
				cY++;
				totCount++;
			}
			if (str[i] == 'z')
			{
				cZ++;
				totCount++;
			}
		}

		comp = totCount * .15;
		if (cA > comp)
		{
			cout << "A is a super freq" << endl;
		}
		if (cB > comp)
		{
			cout << "B is a super freq" << endl;
		}
		if (cC > comp)
		{
			cout << "C is a super freq" << endl;
		}
		if (cD > comp)
		{
			cout << "D is a super freq" << endl;
		}
		if (cE > comp)
		{
			cout << "E is a super freq" << endl;
		}
		if (cF > comp)
		{
			cout << "F is a super freq" << endl;
		}
		if (cG > comp)
		{
			cout << "G is a super freq" << endl;
		}
		if (cH > comp)
		{
			cout << "H is a super freq" << endl;
		}
		if (cI > comp)
		{
			cout << "I is a super freq" << endl;
		}
		if (cJ > comp)
		{
			cout << "J is a super freq" << endl;
		}
		if (cK > comp)
		{
			cout << "K is a super freq" << endl;
		}
		if (cL >= comp)
		{
			cout << "L is a super freq" << endl;
		}
		if (cM > comp)
		{
			cout << "M is a super freq" << endl;
		}
		if (cN > comp)
		{
			cout << "N is a super freq" << endl;
		}
		if (cO > comp)
		{
			cout << "O is a super freq" << endl;
		}
		if (cP > comp)
		{
			cout << "P is a super freq" << endl;
		}
		if (cQ > comp)
		{
			cout << "Q is a super freq" << endl;
		}
		if (cR > comp)
		{
			cout << "R is a super freq" << endl;
		}
		if (cS > comp)
		{
			cout << "S is a super freq" << endl;
		}
		if (cT > comp)
		{
			cout << "T is a super freq" << endl;
		}
		if (cU > comp)
		{
			cout << "U is a super freq" << endl;
		}
		if (cV > comp)
		{
			cout << "V is a super freq" << endl;
		}
		if (cW > comp)
		{
			cout << "W is a super freq" << endl;
		}
		if (cX > comp)
		{
			cout << "X is a super freq" << endl;
		}
		if (cW > comp)
		{
			cout << "W is a super freq" << endl;
		}
		if (cY > comp)
		{
			cout << "Y is a super freq" << endl;
		}
		if (cZ > comp)
		{
			cout << "Z is a super freq" << endl;
		}
		else {
			cout << "There are no super freq's";
		}
		cout << endl;
	}
	text.close();
}
