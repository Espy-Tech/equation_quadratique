#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main() {
	double a, b, c;

	cout << "==========================================" << endl;
	cout << " Calcul d'equation : ax^2 + bx + c = 0" << endl;
	cout << "==========================================" << endl;

	cout << "a = ";
	cin >> a;

	//garanti de la valeur de a
	while (a == 0) {
		cout << "a n'est pas valide !!!\na = ";
		cin >> a;
	}

	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	double delta;
	double x1, x2, x0;


	delta = b * b - 4 * a * c;
	cout << fixed << setprecision(1);  // Pour l'affichage
	cout << "\nDiscriminant = " << delta << endl;

	if (delta > 0) {
		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);
		cout << "L'eqution admet une solution double\nx1 = " << x1 << "\nx2 = " << x2;
	}
	else if (delta == 0) {
		x0 = -b / (2 * a);
		cout << "L'equation admet une solution unique\nx0 = " << x0;
	}
	else {
		// SOLUTIONS COMPLEXES
		double partieReelle = -b / (2 * a);
		double partieImaginaire = sqrt(-delta) / (2 * a);
		
		cout << " Deux solutions complexes conjuguees :" << endl;
		cout << "z₁ = " << partieReelle << " + " << partieImaginaire << "i" << endl;
		cout << "z₂ = " << partieReelle << " - " << partieImaginaire << "i" << endl;
		
		// Vérification (optionnelle)
		cout << "\n Verification :" << endl;
		cout << "z₁ + z₂ = " << 2 * partieReelle << " (doit etre = " << -b / a << ")" << endl;
		cout << "z₁ × z₂ = " << partieReelle * partieReelle + partieImaginaire * partieImaginaire
			 << " (doit etre = " << c / a << ")" << endl;
	}


	return 0;
}
