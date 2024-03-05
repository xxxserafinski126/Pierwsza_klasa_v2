// Car.cpp
#include "Car.hpp"
#include <iostream>

using namespace std;

Car::Car() : mark("Nieznana"), model("Nieznany"), drive("Nieznany"), pr_year(0) {}

Car::Car(const string& mark, const string& model, const string& drive, int prYear)
: mark(mark), model(model), drive(drive), pr_year(prYear) {}

Car::~Car() {
    cout << "destruktor" << endl;
}

void Car::setMark(const string& newMark) {
    mark = newMark;
}

void Car::setModel(const string& newModel) {
    model = newModel;
}

void Car::setDrive(const string& newDrive) {
    drive = newDrive;
}

void Car::setPrYear(int newPrYear) {
    pr_year = newPrYear;
}

string Car::getMark() const {
    return mark;
}

string Car::getModel() const {
    return model;
}

string Car::getDrive() const {
    return drive;
}

int Car::getPrYear() const {
    return pr_year;
}

void Car::display() const {
    cout << "Marka: " << mark << ", Model: " << model << ", Naped: " << drive << ", Rok produkcji: " << pr_year << endl;
}