#include <iostream>
#include "lib.h"
#include "math.h"
using namespace std;

void deltapos(int delta,int a ,int b){

	int x,z;

	x=(-b-sqrt(delta))/(2*a);
	z=(-b+sqrt(delta))/(2*a);
	cout << " les deux solutions sont : X1: "<<x<< " et X2 vaut :"<<z<< endl;

}



void deltazero(int delta,int a ,int b){

	float xf;
	xf=-b/(2*a);
	cout <<"la solution vaut :"<< xf << endl;

}
