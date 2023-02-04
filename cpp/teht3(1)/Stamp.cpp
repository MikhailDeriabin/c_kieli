#include "Stamp.h"

Stamp::Stamp(time_t time, Travel travel) {
	this->time = time;
	this->travel = travel;
}

string Stamp::toString(){
	return time + " - " + travel;
}

time_t Stamp::getTime() { return this->time; }

Travel Stamp::getTravel() { return this->travel; }