// gui2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <time.h>
using namespace std;

void Einloggen(void);
void Ausloggen(void);
void Urlaub(void);


int main()
{

	//double karte[9]; //Array um zahöem auf qr code zu speichern
	char eingabe;
	bool angemeldet = false;



	cout << "		__________________________________________________________________________________________________		" << endl << endl;
	cout << setw(75) <<"Was wollen sie machen ? " << endl << endl;
	cout << setw(70) <<"[a]Einloggen\n" << setw(70) << "[z]Ausloggen\n" << setw(67) << "[u]Urlaub\n" << endl;
	cin >> eingabe;
	if (eingabe == 'u' | eingabe == 'a' | eingabe == 'z') {
		switch (eingabe) {
		case 'u': Urlaub(); break;
		case 'a': Einloggen(); break;
		case 'z': Ausloggen(); break;

		}
	}
	else {
		cout << setw(85) <<"Bitte geben sie einen Richtigen Buchstaben ein!" << endl;
		Sleep(1500);
		system("cls");
		main();
	}
	system("pause");
	return 0;
}



void Einloggen() {
	string name, nachname;
	char auswahljanein;


	system("cls");
	cout << "		__________________________________________________________________________________________________		" << endl << endl;
	cout << setw(75) << "Geben sie ihren Namen + Nachnamen ein: ";
	cin >> name >> nachname;
	cout << endl << endl << setw(68) << "Lautet ihr Name: " << name << " " << nachname << " ? " << endl << endl << setw(68) << "[j]Ja[n]Nein" << endl;
	cin >> auswahljanein;

	if (auswahljanein == 'j') {
		cout << "Sie wurden nun Eingeloggt. Ihre Zeit startet jetzt!!";
		Sleep(1500);
		time_t begin, end;
		time(&begin);

		//Muss in dokument namen + zeit speichern
		system("cls");
		main();
	}

	if (auswahljanein == 'n') {
		cout << setw(85) <<"Bitte geben sie ihren richtigen Namen ein!" << endl;
		Sleep(1500);
		Einloggen();
	}

}


void Ausloggen() {
	system("cls");
	Sleep(1400);





	/*
	time(&end);
	time_t elapsed = end - begin;

	printf("Result: %.20f\n", sum);

	printf("Time measured: %ld seconds.\n", elapsed);
	*/
}


void Urlaub() {
	cout << "TEST" << endl;
}