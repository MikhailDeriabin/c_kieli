#include "main.h"

using namespace std;

int main(int argc, char* argv[]){
	run();
	return 0;
}

void run(){
    int command;
	TravelCard card;
	card.clearTravelCard();

	do{
		//system("clear");
		printCommands();

        string commandStr;
        TravelStatus result;
		getline(cin, commandStr);
        try {
            command = stoi(commandStr);
        } catch (...){
            command = -1;
        }

		switch (command){
		case 1:
			initTravelCard(&card);
			break;
		
		case 2:
            addSaldo(&card);
			break;

		case 3:
			result = card.travel(Travel::HELSINKI);
            printTravelResult(result);
			break;

		case 4:
            result = card.travel(Travel::METROPOLITAN_AREA);;
            printTravelResult(result);
			break;

		case 5:
            cout << "Card information:\n";
			cout << "Name: " << card.getOwner() << endl;
            cout << "Saldo: " << card.getSaldo() << endl;
			break;

		case 6:
            cout <<"See you\n";
			break;

		default:
            cout << "Wrong command\n";
			break;		
		}
	}
	while (command != 6);

}

void printCommands(){
    cout << "\nCommands-------------------------";
    cout << "\n\n";
    cout << "Initialize a card\t\t1";
    cout << "\nAdd saldo\t\t\t2";
    cout << "\nTravel in Helsinki\t\t3";
    cout << "\nTravel at Metropolitan area\t4";
    cout << "\nPrint card info\t\t\t5";
    cout << "\nEnd\t\t\t\t6";
    cout << "\nCommand: ";
}

void initTravelCard(TravelCard* card) {
	cout << "What is your name? ";
	string name;
	getline(cin, name);
	card->setOwner(name);

	cout << "Thanks\n";
	cout << card->getOwner() << ", would you like to put some money?\n";
	string choice;
	while (choice != "yes" && choice != "no") {
		cout << "yes/no? ";
		getline(cin, choice);
		cout << "\n";
	}

	if (choice == "yes")
        addSaldo(card);

	cout << "Thank you " << card->getOwner() << ", your card is ready\n";
}

void addSaldo(TravelCard* card) {
    cout << "How much you want to add?\n";
    cout << "0 - cancel\n";

	string maaraStr;
	float maara = -1.0f;
	int peruutettu = 0;
	while (maara < 0) {
        cout << "00.00 (euro): ";
		getline(cin, maaraStr);
        try {
            maara = stof(maaraStr);
        } catch (...){
            maara = -1;
        }
		if (maara < 0)
			cout << "Amount can not be below 0\n";

		if (maara == 0) {
			cout << "Canceled\n";
			peruutettu = 1;
			break;
		}
	}

	if (!peruutettu) {
		card->addSaldo(maara);
        cout << "Saldo is added\n";
        cout << "Saldo total: " << card->getSaldo();
	}
}

void printTravelResult(TravelStatus status){
    if(status == TravelStatus::INSUFFICIENT_MONEY_AMOUNT)
        cout << "Sorry, but there is not enough money\n";
    else
        cout << "Have a nice trip!\n";
}