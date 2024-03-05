#ifndef CAR_HPP
#define CAR_HPP
#include <string>

using namespace std;

/// <summary>
/// Klasa Car
/// </summary>
class Car {

public:
    /// <summary>
    /// Konstruktor domyœlny.
    /// </summary>
    Car();

    /// <summary>
    /// Konstruktor z parametrami
    /// </summary>
    Car(const string& mark, const string& model, const string& drive, int prYear);

    /// <summary>
    /// Destruktor.
    /// </summary>
    ~Car();

    // Settery
    void setMark(const string& newMark);
    void setModel(const string& newModel);
    void setDrive(const string& newDrive);
    void setPrYear(int newPrYear);

    // Gettery
    string getMark() const;
    string getModel() const;
    string getDrive() const;
    int getPrYear() const;

    /// <summary>
    /// Wyœwietla informacje o samochodzie.
    /// </summary>
    void display() const;

private:
    string mark;  // Marka samochodu
    string model; // Model samochodu
    string drive; // Typ napêdu
    int pr_year;  // Rok produkcji
};

#endif // CAR_HPP