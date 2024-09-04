#include "Fraction.h"
#include <Windows.h> 
#include <iostream>

using namespace std;

void Fraction::setChis(int ch, int index) {
	chis[index] = ch;
}
void Fraction::setZnam(int zn, int index) {
	if (zn == 0) zn = 1;
	znam[index] = zn;
}
void Fraction::getMult() {
	int chM = chis[0] * chis[1];
	int znM = znam[0] * znam[1];
	cout << "Результат множення" << "\n" << chM << "\n" << "-" << "\n" << znM << endl;
}
void Fraction::getDiv() {
	int chM = chis[0] * znam[1];
	int znM = znam[0] * chis[1];
	cout << "Результат ділення" << "\n" << chM << "\n" << "-" << "\n" << znM << endl;
}
float Fraction::getPlus() {
	float plusRes;
	plusRes = float(chis[0]) / float(znam[0]) + float(chis[1]) / float(znam[1]);
	return plusRes;
}
float Fraction::getMinus() {
	float minusRes;
	minusRes = float(chis[0]) / float(znam[0]) - float(chis[1]) / float(znam[1]);
	return minusRes;
}