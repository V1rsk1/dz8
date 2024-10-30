#include <iostream>
using namespace std;



class Transport {
public:
	int year_release;
	string mark;
	double speed_auto;
	double distance;
	Transport() :year_release{ 0 }, mark{ "" }, speed_auto{ 0 }, distance{ 0 } {
	}
	Transport(int age, string marka, double speed, double way) :year_release{ age }, mark{ marka }, distance{ way }, speed_auto{ speed } {
	}
};
class Automobile : public Transport {
	string type_motor;
	int coast_fuel;
public:
	Automobile(int age, string marka, double speed, double way, string motor, int fuel) :Transport(age, marka, speed, way), type_motor(motor), coast_fuel(fuel) {
		cout << "Automobile\n" << "Marka: " << mark << "\nYear of release: " << year_release <<
			"\nWay: " << speed << "\nSpeed: " << distance << "\nMotor's type: " << type_motor << endl;
		cout << "Time: " << speed_auto / distance << " hours\nPrice: " << ((way / 100) * coast_fuel) * 60 << " grn";
	}
};
class Bike : public Transport {
	int gears;
	int amortization;
	int obslugovuvannya;
	int other_coast;
public:
	Bike(int age, string marka, double speed, double way, int gear, int amor, int obsl, int coast)
		:Transport(age, marka, speed, way), gears(gear), amortization(amor), obslugovuvannya(obsl), other_coast(coast) {
		cout << "Bicycle\n" << "Marka: " << mark << "\nYear of release: " << year_release <<
			"\nWay: " << speed << "\nSpeed: " << speed << "\nGears: " << gears << endl;
		cout << "Time: " << speed_auto / distance << " hours\nPrice: " << (amortization + obslugovuvannya + other_coast) * distance << " grn";
	}
};
class Viz : public Transport {
	string Whopull;
	double amortization;
	double obslugovuvannya;
	double other_coast;
public:
	Viz(int age, string marka, double speed, double way, string puller, double amor, double obsl, double coast)
		:Transport(age, marka, speed, way), Whopull(puller), amortization(amor), obslugovuvannya(obsl), other_coast(coast) {
		cout << "Viz\n" << "Marka: " << mark << "\nYear of release: " << year_release <<
			"\nWay: " << speed << "\nSpeed: " << distance << "\nWho pull: " << Whopull << endl;
		cout << "Time: " << speed_auto / distance << " hours\nPrice: " << (amortization + obslugovuvannya + other_coast) * speed << " grn";
	}
};
int main()
{
	Automobile car{ 2018,"Renault",155,583,"Duster",30 };
	cout << endl << endl;
	Bike bicycle{ 2015,"Sсhwinn",32,267,17,5,7,8 };
	cout << endl << endl;
	Viz viz{ 1998,"Strongway",15,180,"Horse",1.5,2.5,6 };
}
