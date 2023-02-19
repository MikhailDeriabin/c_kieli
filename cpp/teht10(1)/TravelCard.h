#ifndef TRAVELCARD_H
#define TRAVELCARD_H

#include <string>
#include <iostream>
#include <memory>
#include <queue>
#include "FixedSizeQueue.h"
#include "Travel.h"
#include "TravelStatus.h"
#include "Stamp.h"

#define HELSINKI_PRICE (float)3.0
#define METROPOLITAN_AREA_PRICE (float)4.80
#define MAX_HISTORY_SIZE (int)3

using namespace std;

class TravelCard{
private:
    string* owner = new string;
    float* saldo = new float;
    FixedSizeQueue<Stamp, MAX_HISTORY_SIZE>* StampHistory = new FixedSizeQueue<Stamp, MAX_HISTORY_SIZE>();

public:
	TravelCard();
    ~TravelCard();
    TravelCard (const TravelCard& card);

	void addSaldo(float amount);
	void clearTravelCard();

    string getOwner();
	void setOwner(string owner);
    float getSaldo();
	void setSaldo(float saldo);
	bool decreaseSaldo(float amount);
    FixedSizeQueue<Stamp, MAX_HISTORY_SIZE>* getHistory();
	void addStamp(Stamp& stamp);
    string toString();

    friend ostream& operator<<(ostream& os, shared_ptr<TravelCard> card);
};

#endif