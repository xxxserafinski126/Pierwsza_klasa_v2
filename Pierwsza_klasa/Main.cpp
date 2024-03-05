#include "Car.hpp"
using namespace std;

int main() {
    Car car("Toyota", "Corolla", "Diesel", 2004);
    car.display(); // Wyświetla informacje o samochodzie

    // Zmiana atrybutów samochodu
    car.setModel("Yaris");
    car.setDrive("Hybryda");
    car.setPrYear(2020);

    car.display(); // Wyświetla zmienione informacje o samochodzie
}