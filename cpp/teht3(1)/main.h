#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include "TravelCard.h"
#include "Travel.h"
#include "TravelStatus.h"

void printCommands();
void initTravelCard(TravelCard* card);
void addSaldo(TravelCard* card);
void printTravelResult(TravelStatus status);
void run();

#endif