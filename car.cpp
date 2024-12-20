#include "car.h"

Car::Car(uint32_t seats,
         uint32_t enginePower,
         const std::string& manufacturer,
         const std::string& model,
         uint32_t price,
         uint32_t weight,
         uint32_t year) : _seats(seats), _enginePower(enginePower)
{
    _manufacturer = manufacturer;
    _model = model;
    _price = price;
    _weight = weight;
    _year = year;
}
uint32_t Car::getSeats() const
{
    return _seats;
}
uint32_t Car::getEnginePower() const
{
    return _enginePower;
}

void Car::setSeats(uint32_t seats)
{
    _seats = seats;
}
void Car::setEnginePower(uint32_t power)
{
    _enginePower = power;
}

std::ostream& operator<<(std::ostream& out, const Car& v)
{
    out << v._seats << ' ' << v._enginePower << ' ' << v._manufacturer << ' ' << v._model << ' ' << v._weight << ' ' << v._year << ' ' << v._price;
    return out;
}
std::istream& operator>>(std::istream& in, Car& v)
{
    in >> v._seats >> v._enginePower >> v._manufacturer >>  v._model >> v._weight >> v._year >> v._price;
    return in;
}
