// IceCream.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int welcomeMessage();
int whichIceCream();
int coneType();

int iceCream = 0;
double cost[] = {1.00,1.20,1.10,1.40};

int main(double cost[])
{
	string scoops;
	int otherFlavours = 0;
	int howMany = 0;
	int many = 0;
	double total = 0;
	string flavours[] = { "vanilla", "mint choc chip", "raspberry ripple", "Double Choc Chip with Choc Sauce Swirl" };



	welcomeMessage();
	coneType();
	whichIceCream();

	cout << "Is this the only scoop flavour you would like? (y/n)\n";
	cin >> scoops;
	
	if (scoops == "y")
	{
		cout << "how many scoops would you like of " << flavours[iceCream - 1] << "?\n";
		cin >> howMany;
		total = cost[(iceCream - 1)] * howMany;
		cout << "the total cost for your scoops is " << fixed << setprecision(2) << total;
	}
	else if (scoops == "n")
	{
		cout << "how many scoops would you like of " << flavours[iceCream - 1] << "?" << endl;
		cin >> howMany;
		
		cout << "What other scoop flavour would you like?\n";
		whichIceCream();
		//double theScoops(int iceCream, int howMany, double cost);

		cout << "how many scoops would you like of " << flavours[iceCream - 1] << "?\n";
		cin >> many;
		total = many + howMany;
		cout << "the total cost for your scoops is " << fixed << setprecision(2) << cost[(iceCream - 1)] * total;
	}
	else
	{
		cout << "No ice Cream for you"; 
	}
	
	cin.get();
	cin.ignore();
    return 0;
}
int welcomeMessage()
	{
		cout << "welcome to the ice cream shop\n" << endl;
		
		return 0;
	}

int whichIceCream()
{
	cout << "\nWhat flavour of Ice Cream would you like?\n The choices are: " << endl << "\t Vanilla(1)\t\t (1.00 per scoop)\n\t Mint Choc Chip(2) \t\t(1.20 per scoop) \n\t Raspberry Ripple(3)\t\t (1.10 per scoop) \n\t Double Choc Chip with choc sause swirl(4)\t (1.40 per scoop)\n";
		cin >> iceCream;
		
	switch (iceCream)
	{
	case 1:
		cout << "You have chosen vanilla \n ";
		break;
	case 2:
		cout << "You have chosen Mint Choc Chip  \n ";
		break;
	case 3:
		cout << "You have chosen Raspberry Ripple  \n";
		break;
	case 4:
		cout << "You have chosen Double Choc Chip with Choc Sauce Swirl \n";
		break;
	default:
		cout << "You have not chosen a Flavour \n";
		break;
	}
	cout << endl;
	return iceCream;
}
int coneType()
{ 
	int typeOfCone;
	double coneCost = 0;

	cout << "what type of cone would you like?\n\t teddy bear cone(1) 0.75\n\t wafer cone(2) 1.00\n\t chocolate wafer cone(3) 1.20\n\t large chocolate wafer cone(4) 1.75\n";
		cin >> typeOfCone;

		switch(typeOfCone)
		{
		case 1:
			cout << "You have choosen the teddy bear cone\n";
			coneCost = 0.75;
				break;
		case 2:
			cout << "You have choosen the wafer cone\n";
			coneCost = 1.00;
				break;
		case 3: 
			cout << "you have choosen the chocolate wafer cone\n";
			coneCost = 1.20;
				break;
		case 4:
			cout << "You have choosen the large chocolate wafer cone\n";
			coneCost = 1.75;
				break;
		default:
			cout << "you have not choosen a cone please choose between \n\t teddy bear cone(1) 0.75\n\t wafer cone(2) 1.00\n\t chocolate wafer cone(3) 1.20\n\t large chocolate wafer cone(4) 1.75";
			break;


		}
		return 0;
}