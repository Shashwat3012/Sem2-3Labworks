#include <iostream>

using namespace std;

class Vehicle
{
private:
    int regnum;
    string model;
    float speed, fuel, mileage;

public:
    Vehicle(string model, int regnum, float speed, float fuel, float mileage)
    {
        this->model = model;
        this->regnum = regnum;
        this->speed = speed;
        this->fuel = fuel;
        this->mileage = mileage;
    }

    string getModel()
    {
        return this->model;
    }
    void setModel(string model)
    {
        this->model = model;
    }

    int getRegNum()
    {
        return this->regnum;
    }
    void setRegNum(int regnum)
    {
        this->regnum = regnum;
    }

    float getSpeed()
    {
        return this->speed;
    }
    void setSpeed(float speed)
    {
        this->speed = speed;
    }

    float getFuel()
    {
        return this->fuel;
    }
    void setFuel(float fuel)
    {
        this->fuel = fuel;
    }

    float getMileage()
    {
        return this->mileage;
    }
    void setMileage()
    {
        this->mileage = mileage;
    }

    float fuelNeeded(float km)
    {
        return (this->mileage / km);
    }

    float distanceCovered(float hour)
    {
        return (this->speed * hour);
    }

    public void display()
    {
        cout << "Vehicle Model :  " << this->model << endl;
        cout << "Registration number :  " << this->regnum << endl;
        cout << "Vehicle Speed :  " << this->speed << " km/h" << endl;
        cout << "Vehicle Fuel :  " << this->fuel << " litres" << endl;
        cout << "Vehicle Mileage :  " << this->mileage << "km/litre" << endl;
    }
};

class Truck : public Vehicle
{
private:
    float CargoWtlimit;

public:
    Truck(string model, int regnum, float speed, float fuel, float mileage, float CargoWtlimit) : 
    Vehicle(model, regnum, speed, fuel, mileage)
    {
        this->CargoWtlimit = CargoWtlimit;
    }

    float GetCargoWtlimit(){
        return this-> CargoWtlimit;
    }
    float SetCargoWtlimit(){
        this->CargoWtlimit = CargoWtlimit;
    }

    public void display()
    {
        cout << "Vehicle Model :  " << getModel << endl;
        cout << "Registration number :  " << getRegNum << endl;
        cout << "Vehicle Speed :  " << getSpeed << " km/h" << endl;
        cout << "Vehicle Fuel :  " << getFuel << " litres" << endl;
        cout << "Vehicle Mileage :  " << getMileage << "km/litre" << endl;
        cout << "Truck Cargo Weight Limit :  " << this->CargoWtlimit << "tons" << endl;
    }
}


class Bus : public Vehicle
{
private:
    int Passengers;

public:
    Bus(string model, int regnum, float speed, float fuel, float mileage, int Passengers) : 
    Vehicle(model, regnum, speed, fuel, mileage)
    {
        this->Passengers = Passengers;
    }

    float GetPassengers(){
        return this->Passengers;
    }
    float SetPassengers(){
        this->Passengers = Passengers;
    }

    public void display()
    {
        cout << "Vehicle Model :  " << getModel << endl;
        cout << "Registration number :  " << getRegNum << endl;
        cout << "Vehicle Speed :  " << getSpeed << " km/h" << endl;
        cout << "Vehicle Fuel :  " << getFuel << " litres" << endl;
        cout << "Vehicle Mileage :  " << getMileage << "km/litre" << endl;
        cout << "Number of Passengers :  " << this->Passengers  << endl;
    }
}

int main() {

    Truck truckObj("Eicher", 1234, 60, 50, 15, 27);
    Bus busObj("BharatBenz", 6789, 25, 50, 10, 70);
    
    cout << "#########################################" << endl;
    cout << "#########        B U S       ############" << endl;
    cout << "#########################################" << endl;
    busObj.display();
    cout << "Fuel needed :  " << busObj.fuelNeeded(10) << endl;
    cout << "Distance covered :  " << busObj.distanceCovered(2) << endl;

    cout << endl;

    
    cout << "#########################################" << endl;
    cout << "#########      T R U C K     ############" << endl;
    cout << "#########################################" << endl;
    truckObj.display();
    cout << "Fuel needed :  " << truckObj.fuelNeeded(15) << endl;
    cout << "Distance covered :  " << truckObj.distanceCovered(2) << endl;
}