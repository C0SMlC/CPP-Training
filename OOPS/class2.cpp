#include <bits/stdc++.h>
using namespace std;

// Forward declaration of the Vehicle class
class Vehicle;

// Car class definition
class Car
{
private:
    string name;
    string color;
    int numTyres;
    int maxpassengers;

public:
    // Constructor
    Car(string name, int maxpassengers)
    {
        this->name = name;
        this->maxpassengers = maxpassengers;
        this->color = "Blue";
        this->numTyres = 4; // Corrected to 4 tires for a standard car
    }

    // Member function to print car details
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "maxpassengers: " << maxpassengers << endl;
        cout << "Color: " << color << endl;
        cout << "Number of Tyres: " << numTyres << endl;
    }

    // Friend function to access maxSpeed from Vehicle
    friend void printmaxSpeed();
};

// Vehicle class definition
class Vehicle
{
private:
    int maxSpeed;

protected:
    int numTyres;

public:
    string color;

    // Constructor
    Vehicle()
    {
        maxSpeed = 0; // Initialize maxSpeed
        numTyres = 0; // Initialize numTyres
    }

    // Setter for maxSpeed
    void setMaxSpeed(int speed)
    {
        maxSpeed = speed;
    }

    // Friend function to access maxSpeed from Car
    friend void printmaxSpeed();
};

// Function to print maxSpeed using friend access
void printmaxSpeed()
{
    Vehicle v;         // Creating a Vehicle instance
    v.maxSpeed = 1000; // Accessing private member maxSpeed of Vehicle
    cout << "maxSpeed: " << v.maxSpeed << endl;
}

int main()
{
    Vehicle v;
    v.color = "Red";

    Car c("BMW", 5);

    c.print();
    c.printmaxSpeed(); // Call to friend function
    return 0;
}
