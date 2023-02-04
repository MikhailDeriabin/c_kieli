#ifndef STAMP_H
#define STAMP_H

#include "Travel.h"
#include <ctime>
#include <string>
using namespace std;

class Stamp{
public:
	Stamp(time_t time, Travel travel);
	time_t getTime();
	Travel getTravel();
	string toString();

private:
	time_t time;
	Travel travel;

};

#endif