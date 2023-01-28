#ifndef TRAVELCARD_H
#define TRAVELCARD_H

#include <string>
#include "Travel.h"
#include "TravelStatus.h"

#define HELSINKI_PRICE (float)3.0
#define METROPOLITAN_AREA_PRICE (float)4.80

using namespace std;

class TravelCard {
private:
	string owner = "Anonymus";
	float saldo = 0.0f;
	bool decreaseSaldo(float amount);

public:
	TravelCard();

	void addSaldo(float amount);
	TravelStatus travel(Travel travel);
	void clearTravelCard();

	string getOwner();
	void setOwner(string owner);
	float getSaldo();
	void setSaldo(float saldo);
};

#endif