#include <iostream>
#include <cmath>
using namespace std;

int check_exist(int firSide, int secSide, int thirSide);
int check_isosceles(int firSide, int secSide, int thirSide);
int countings(int firSide, int secSide, int thirSide);


int main(){
	int firSide, secSide, thirSide;

	cout << "Type in first side for triangle" << " ";
	cin >> firSide;
	cout << "Type in second side for triangle" << " ";
	cin >> secSide;
	cout << "Type in third side for triangle" << " ";
	cin >> thirSide;

	if (check_exist(firSide, secSide, thirSide) == true)
	{
		cout << (check_isosceles(firSide, secSide, thirSide) == true?
		  "That triangle's isosceles!!!" : "That triangle isn't isosceles") << endl;
		countings(firSide, secSide, thirSide);
	}
	else cout << "Your triangle doesn't exist :(" << endl;

	return 0;
}


int check_exist(int firSide, int secSide, int thirSide)
{
	bool isos = false;
	int sum12 = firSide + secSide;
	int sum13 = firSide + thirSide;
	int sum23 = secSide + thirSide;

	if ((sum12 > thirSide) and (sum13 > secSide) and (sum23 > firSide))
		{isos = true;}

	return isos;
}


int check_isosceles(int firSide, int secSide, int thirSide)
{
	bool checker = false;
	
	if ((firSide == secSide && firSide != thirSide) 
	or (firSide == thirSide && firSide != secSide) 
	or (thirSide == secSide && firSide != thirSide))
		{checker = true;}

	return checker;
}


int countings(int firSide, int secSide, int thirSide)
{
	int perim = firSide + secSide + thirSide;
	double halfPerim = perim / 2.0;
	double square = sqrt(halfPerim * (halfPerim - firSide) * 
	(halfPerim - secSide) * (halfPerim - thirSide));
	
	cout << "Triangle's perimeter: " << endl;
	cout << perim << endl;
	cout << "Triangle's square: " << endl;
	cout << square << endl;

	return 0;
}


//grgdggdhhhfhj
