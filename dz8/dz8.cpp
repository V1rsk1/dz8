#include <iostream>
#include<Windows.h>
using namespace std;

class Transport {
public:
    int year_release;
    string mark;
    double speed_auto;
    double distance;

    Transport() : year_release(0), mark(""), speed_auto(0), distance(0) {}

    Transport(int year, string marka, double speed, double way)
        : year_release(year), mark(marka), speed_auto(speed), distance(way) {}
};

class Automobile : public Transport {
    string type_motor;
    int fuel_cost;

public:
    Automobile(int year, string marka, double speed, double way, string motor, int fuel)
        : Transport(year, marka, speed, way), type_motor(motor), fuel_cost(fuel) {
        cout << "Автомобіль" << endl;
        cout << "Марка: " << mark << "\nРік випуску: " << year_release 
             << "\nДистанція: " << distance << " км\nШвидкість: " << speed_auto 
             << " км/год\nТип двигуна: " << type_motor << endl;
        cout << "Час у дорозі: " << distance / speed_auto << " годин" << endl;
        cout << "Вартість поїздки: " << ((distance / 100) * fuel_cost) * 60 << " грн" << endl;
    }
};

class Bike : public Transport {
    int gears;
    int amortization;
    int maintenance_cost;
    int other_costs;

public:
    Bike(int year, string marka, double speed, double way, int gear_count, int amort, int maintenance, int other)
        : Transport(year, marka, speed, way), gears(gear_count), amortization(amort), maintenance_cost(maintenance), other_costs(other) {
        cout << "Велосипед" << endl;
        cout << "Марка: " << mark << "\nРік випуску: " << year_release 
             << "\nДистанція: " << distance << " км\nШвидкість: " << speed_auto 
             << " км/год\nКількість передач: " << gears << endl;
        cout << "Час у дорозі: " << distance / speed_auto << " годин" << endl;
        cout << "Вартість поїздки: " << (amortization + maintenance_cost + other_costs) * distance << " грн" << endl;
    }
};

class Cart : public Transport {
    string puller;
    double amortization;
    double maintenance_cost;
    double other_costs;

public:
    Cart(int year, string marka, double speed, double way, string animal, double amort, double maintenance, double other)
        : Transport(year, marka, speed, way), puller(animal), amortization(amort), maintenance_cost(maintenance), other_costs(other) {
        cout << "Віз" << endl;
        cout << "Марка: " << mark << "\nРік випуску: " << year_release 
             << "\nДистанція: " << distance << " км\nШвидкість: " << speed_auto 
             << " км/год\nХто тягне: " << puller << endl;
        cout << "Час у дорозі: " << distance / speed_auto << " годин" << endl;
        cout << "Вартість поїздки: " << (amortization + maintenance_cost + other_costs) * distance << " грн" << endl;
    }
};

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	
    Automobile car(2018, "Renault", 155, 583, "Duster", 30);
    cout << endl << endl;
    Bike bicycle(2015, "Schwinn", 32, 267, 17, 5, 7, 8);
    cout << endl << endl;
    Cart cart(1998, "Strongway", 15, 180, "Кінь", 1.5, 2.5, 6);
    return 0;
}
