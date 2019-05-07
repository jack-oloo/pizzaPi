// pizzaPi.cpp : Defines the entry point for the console application.
//This program calculates the number of slices that may be cut off from a specified calculated pizza size

#include "stdafx.h"
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double areaSlice = 14.125; //to hold the area of one slice of pizza in inches
	double diamemterPizza; //to hold the diameter of pizza in inches
	double areaPizza; //to hold the area of the full pizza
	double radiusPizza; //to hold the radius of the full pizza
	double const PI = 3.14159; //to hold the area of the full pizza
	double pizzaSlices; //to hold the number of pizza slices to be taken from the calculated pizza size
	

	//get the diameter of the full pizza from the user
	cout << "Enter the diameter of the pizza (in inches) \n ";
	cin >> diamemterPizza;

	//calculate and store the radius of the full pizza
	radiusPizza = diamemterPizza / 2;

	//calculate and store the area of the full pizza
	areaPizza = PI*radiusPizza*radiusPizza;

	//calculate and store the number of slices that amy be taken from this pizza size
	pizzaSlices = areaPizza / areaSlice;

	
	//Display a message telling the number of slices
	cout << setprecision(1) << fixed << showpoint
		<< "The number of slices to be taken from this pizza is "
		<< pizzaSlices << endl;
		
	
	system("pause");
		return 0;
}