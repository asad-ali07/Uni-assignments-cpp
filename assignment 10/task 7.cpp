#include <iostream>
#include <string>
using namespace std;

double eff(int EngDisp, double FuelCon, double weight) {
    double mpg = 235.2 / FuelCon;
    return mpg * (1500.0 / weight) * (2000.0 / EngDisp);
}

double eff(int cargoWeight, float enginePower, double dragCoeff) {
    return (enginePower * 100.0) / (cargoWeight * dragCoeff);
}

double eff(string type, double altitude, float speed) {
    double baseEff;

    if (type == "Private")
        baseEff = 5.0;
    else if (type == "Commercial")
        baseEff = 20.0;
    else
        baseEff = 10.0;

    return baseEff * (speed / 300.0) * (altitude / 10000.0);
}

int main() {
    int choice;

    cout << "Select vehicle type:\n";
    cout << "1. Car\n2. Truck\n3. Airplane\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        int EngDisp;
        double FuelCon, weight;

        cout << "Engine displacement (cc): ";
        cin >> EngDisp;
        cout << "Fuel consumption (L/100km): ";
        cin >> FuelCon;
        cout << "Weight (kg): ";
        cin >> weight;

        cout << "Fuel Efficiency For Car: "
             << eff(EngDisp, FuelCon, weight) << " Miles per Gallon" << endl;
    }

    else if (choice == 2) {
        int cargoWeight;
        float enginePower;
        double dragCoeff;

        cout << "Cargo weight (kg): ";
        cin >> cargoWeight;
        cout << "Engine power (HP): ";
        cin >> enginePower;
        cout << "Drag coefficient: ";
        cin >> dragCoeff;

        cout << "Fuel Efficiency For Truck: "
             << eff(cargoWeight, enginePower, dragCoeff) << " gallons per mile" << endl;
    }

    else if (choice == 3) {
        string type;
        double altitude;
        float speed;

        cout << "Aircraft type (Private/Commercial): ";
        cin >> type;
        cout << "Altitude (feet): ";
        cin >> altitude;
        cout << "Airspeed (knots): ";
        cin >> speed;

        cout << "Fuel Efficiency For Airplane: "
             << eff(type, altitude, speed) << " hours per gallon" << endl;
    }

    else {
        cout << "Invalid choice!\n";
    }

    return 0;
}