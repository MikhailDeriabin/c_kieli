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
	string* owner = new string;
	float* saldo = new float;
	bool decreaseSaldo(float amount);

public:
	TravelCard();
    ~TravelCard();

	void addSaldo(float amount);
	TravelStatus travel(Travel travel);
	void clearTravelCard();

	string* getOwner();
	void setOwner(string owner);
	float* getSaldo();
	void setSaldo(float saldo);
};

#endif