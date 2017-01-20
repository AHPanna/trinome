//============================================================================
// Name        : Trinome.cpp
// Author      : Panna
// Version     : 1.0
// Copyright   : 2017 by Panna
// Description : Trinome pour Mat mat
//============================================================================

#include <iostream>
#include "lib.h"
#include "math.h"
using namespace std;

int main() {
	int a,b,c;
	cout << "Bonjour entrée les 3 valeur de votre Trinome de  [Ax^2 + Bx + C] : \n "<< endl;

	cout << "Entrée A :  "<< endl ;
	cin >> a;

	cout << "\n Entrée B :  "<< endl ;
	cin >> b;

	cout << "\n Entrée C :  "<< endl ;
	cin >> c;

	float delta = (b*b)+4*a*c;
	cout<< "le delta vaut :"<< delta<< endl;

	if (delta > 0 ){
		deltapos(delta,a,b);
	}else if(delta == 0){
		deltazero(delta,a,b);
	}else {
	cout << "le delta vaut : "<< delta <<" Donc Pas de resultat cya:"<< endl;
	}
	return 0;
}
