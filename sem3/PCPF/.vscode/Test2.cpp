#include <iostream>
using namespace std;

//SuperClass Vehicle
class vehicle
{
private:
    string Vmodel;
    int RegNum, Speed, FuelCapacity, Mileage;

public:
    vehicle()
    {
    }
    vehicle(string V, int R, int S, int F, int M)
    {
        Vmodel = V;
        RegNum = R;
        Speed = S;
        FuelCapacity = F; 
        Mileage = M; 
    }

    ~vehicle()
    {
        cout << "Vehicle Dismissed\n";
    }

    void setModel(string s)
    {
        Vmodel = s;
    }
    void setRegestrationNum(int r)
    {
        RegNum = r;
    }
    void setSpeed(int s)
    {
        Speed = s;
    }
    void setFuelCApacity(int fc)
    {
        FuelCapacity = fc;
    }
    void setMileage(int m)
    {
        Mileage = m;
    }

    string getModel()
    {
        return Vmodel;
    }
    int getRegestrationNum()
    {
        return RegNum;
    }
    int getSpeed(int s)
    {
        return Speed;
    }
    int getFuelCApacity(int fc)
    {
        return FuelCapacity;
    }
    int getMileage(int m)
    {
        return Mileage;
    }

    int fuelNeeded(int dist)
    {
        int result = dist / Mileage;
        return result;
    }

    int distanceCovered(int time)
    {
        int result = Speed * time;
        return result;
    }

    void display()
    {
        cout << "Vehicle model: " << Vmodel << endl;
        cout << "Regestration Number: " << RegNum << endl;
        cout << "Speed(In km/hr): " << Speed << endl;
        cout << "Fuel Capacity(In litres): " << FuelCapacity << endl;
        cout << "Mileage(In km/litre): " << Mileage << endl;
    }
};

// Sub Class Bus of the Superclass Vehicle
class bus : public vehicle
{
private:
    int NumPass;

public:
    bus(int n)
    {
        NumPass = n;
    }

    ~bus()
    {
        cout << "Bus Dismissed\n";
    }

    void setNoPass(int n)
    {
        NumPass = n;
    }

    int getNoPass()
    {
        return NumPass;
    }

    void display()
    {
        cout << "Number of passengers: " << NumPass << endl;
    }
};


// Sub Class Truck of the Superclass Vehicle
class truck : public vehicle
{
private:
    int WtLim;

public:
    truck(int wt)
    {
        WtLim = wt;
    }

    ~truck()
    {
        cout << "Truck Dismissed\n";
    }

    void setWtLim(int w)
    {
        WtLim = w;
    }

    int getWtLim()
    {
        return WtLim;
    }

    void display()
    {
        cout << "Cargo Weight Limit: " << WtLim << " Ton" << endl;
    }
};

int main()
{
    truck t(27);
    bus b(50);

    t.setModel("Eicher");
    t.setRegestrationNum(404);
    t.setSpeed(75);
    t.setFuelCApacity(50);
    t.setMileage(10);

    b.setModel("BharatBenz 2700");
    b.setRegestrationNum(110);
    b.setSpeed(59);
    b.setFuelCApacity(40);
    b.setMileage(9);

    t.fuelNeeded(500);
    cout << "Fuel needed for truck to travel 500 Km: " << t.fuelNeeded(500) << " Litres\n";
    b.fuelNeeded(810);
    cout << "Fuel needed for bus to travel 810 Km: " << b.fuelNeeded(810) << " Litres\n";

    t.distanceCovered(2);
    cout << "Distance covered by truck in 2 hours: " << t.distanceCovered(2) << " Km\n";
    b.distanceCovered(3);
    cout << "Distance covered by bus in 3 hours: " << b.distanceCovered(3) << " Km\n";

    t.display();
    b.display();

    return 0;
}