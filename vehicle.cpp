#include <iostream>
#include "vehicle.h"
#include "car.h"
#include <cstdlib>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

bool comparePrices(const vector<Vehicle>::iterator& a, const vector<Vehicle>::iterator& b)
{
    return a->getPrice() < b->getPrice();
}

int main()
{

    srand(time(0));

    map<string, vector<string>> manufacturers;

    manufacturers["Ford Motor Company"] = {
            "Ford Mustang",
            "Ford F-150",
            "Ford Explorer",
            "Ford Bronco",
            "Ford Escape",
            "Ford Edge"
    };

    manufacturers["General Motors"] = {
            "Chevrolet Camaro"
            "Chevrolet Silverado",
            "Chevrolet Equinox",
            "Chevrolet Malibu",
            "GMC Sierra",
            "Cadillac Escalade",
            "Cadillac CT5",
            "Buick Enclave"
    };

    manufacturers["Chrysler Group"] = {
            "Dodge Charger",
            "Dodge Challenger",
            "Jeep Wrangler",
            "Jeep Grand Cherokee",
            "Ram 1500",
            "Chrysler Pacifica"
    };

    string keys[] = {"Ford Motor Company", "General Motors", "Chrysler Group"};
    vector<Car> cars;
    string manufacturerName;
    vector<string> models;
    for(int i = 0; i < 100; ++i)
    {
        manufacturerName = keys[rand() % 3];
        models = manufacturers[manufacturerName];
        cars.push_back(Car(rand() % 10,
                           rand() % 100,
                           manufacturerName,
                           models[rand() % models.size()],
                           rand() % 100000,
                           rand() % 10000,
                           rand() % 2000));
    }
    int maxEnginePower = cars[0].getEnginePower();
    int index = 0;
    for(int i = 1; i < 100; ++i)
    {
        if ((cars[i].getSeats() == 5) && (cars[i].getEnginePower() > maxEnginePower))
        {
            maxEnginePower = cars[i].getEnginePower();
            index = i;
        }
    }
    cout << cars[index] << endl;

    models.clear();

    vector<Vehicle> v;

    for(int i = 0; i < 100; ++i)
    {
        manufacturerName = keys[rand() % 3];
        models = manufacturers[manufacturerName];
        v.push_back(Vehicle(manufacturerName,
                            models[rand() % models.size()],
                            rand() % 100000,
                            rand() % 10000,
                            rand() % 2000));
    }

    cout << *(max(v.begin(), v.end(), comparePrices)) << endl;

    return 0;
}
